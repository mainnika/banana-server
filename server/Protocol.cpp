#include "Protocol.h"
#include "Client.h"

#include <easylogging++.h>
#include <free_deleter.h>

Protocol::Protocol()
{
}

Protocol::~Protocol()
{
}

void Protocol::make_packet(char* data, size_t len)
{
	std::unique_ptr<char, free_delete<char>> data_guard(data);

	packets::Packet common;
	common.ParseFromArray(data, len);

	packets::ID id = common.id();

	switch (id)
	{
		case packets::ID::HELLO:
			this->handle_packet<packets::Hello, Client, &Client::on_hello>(data, len, this);
			return;

		default:
			LOG(INFO) << "Unknow packet id ";
			return;
	}

}