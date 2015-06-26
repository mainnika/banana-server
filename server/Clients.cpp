#include "Clients.h"
#include "Client.h"

#include "easylogging++.h"
#include "tools/alloc_buffer.h"

Clients::Clients()
{
	uv_mutex_init(&this->mutex);
}

Clients::~Clients()
{
	TcpClient *client = nullptr;
	while (this->available_clients.try_pop(client))
	{
		delete client;
	}

	uv_mutex_lock(&this->mutex);
	for (auto it : this->connected)
	{
		delete it.first;
		delete it.second;

	}
	uv_mutex_unlock(&this->mutex);
	uv_mutex_destroy(&this->mutex);
}

void Clients::on_notify()
{
	uv_stream_t* stream;
	while (this->receive_queue.try_pop(stream))
	{
		TcpClient *available = nullptr;
		if (this->available_clients.try_pop(available))
			stream->data = available;

		if (available == nullptr)
			available = new Client();

		available->socket = reinterpret_cast<uv_tcp_t*>(stream);
		stream->data = available;

		stream->loop = &this->get_loop();
		uv_read_start(stream, &alloc_buffer, &TcpClient::on_segment);

		available->handle_connection();

		LOG(INFO) << "Client " << static_cast<void*>(stream->data) << " connected";
	}
}

void Clients::connect(uv_stream_t *client)
{
	this->receive_queue.push(client);
	this->notify();
}

void Clients::disconnect(uv_stream_t *stream, TcpClient* client)
{
	stream->data = nullptr;

	uv_mutex_lock(&this->mutex);
	this->connected.unsafe_erase(stream);
	uv_mutex_unlock(&this->mutex);

	this->available_clients.push(client);

	LOG(INFO) << "Client " << static_cast<void*>(client) << " disconnected";
}
