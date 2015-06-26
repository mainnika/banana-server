#include "Server.h"

#include <tools/easylogging++.h>

#include <algorithm>

Server::Server(Config &config) :
	tcp(config.port, config.host)
{
	Server::instance = this;
	LOG(INFO) << "Server started";
}

Server::~Server()
{
	LOG(INFO) << "Server destroyed";
}

Server* Server::get()
{
	return Server::instance;
}

void Server::start()
{
	this->clients.start();
	this->tcp.start();
}

void Server::stop()
{
	this->tcp.stop();
	this->clients.stop();
}

Server *Server::instance;