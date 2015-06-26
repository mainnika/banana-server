#include "Client.h"
#include "Server.h"

#include <easylogging++.h>
#include <iostream>

Client::Client() :
logged(false)
{

}

Client::~Client()
{
}

bool Client::is_logged() const
{
	return this->logged;
}

void Client::on_hello(packets::Hello& packet)
{
	packets::Hello response;
	this->send_packet(response);
}