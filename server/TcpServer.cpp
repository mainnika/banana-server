#include "TcpServer.h"
#include "Server.h"

#include "easylogging++.h"

#include <stdlib.h>
#include <stdio.h>

const int DEFAULT_BACKLOG = 128;

TcpServer::TcpServer(int port, std::string host = "0.0.0.0") :
host(host), port(port)
{
	this->server.data = this;
}

TcpServer::~TcpServer()
{
}

void TcpServer::receive_new_connection(uv_stream_t* server, int status)
{
	TcpServer *self = static_cast<TcpServer*> (server->data);

	uv_tcp_t *client = new uv_tcp_t;
	uv_tcp_init(&self->get_loop(), client);

	if (uv_accept(server, (uv_stream_t*) client) == 0)
	{
		Server::get()->clients.connect(reinterpret_cast<uv_stream_t*>(client));
	}
	else
	{
		uv_close(reinterpret_cast<uv_handle_t*> (client), nullptr);
	}
}

void TcpServer::on_run()
{
	struct sockaddr_in addr;
	uv_ip4_addr(this->host.c_str(), this->port, &addr);
	uv_tcp_init(&this->get_loop(), &this->server);
	uv_tcp_bind(&this->server, (const struct sockaddr*) &addr, 0);
	uv_listen(reinterpret_cast<uv_stream_t*> (&this->server), DEFAULT_BACKLOG, &TcpServer::receive_new_connection);

	LOG(INFO) << "TcpServer " << static_cast<void*> (this) << " started";
}

void TcpServer::on_stop()
{
	uv_close(reinterpret_cast<uv_handle_t*> (&this->server), nullptr);

	LOG(INFO) << "TcpServer " << static_cast<void*> (this) << " stopped";
}
