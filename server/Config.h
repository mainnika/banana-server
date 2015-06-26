#pragma once

struct Config
{
	std::string host;
	int port;

	Config(std::string host, int port) :
	host(host), port(port)
	{
	}

};