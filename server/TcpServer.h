#pragma once

#include "NoCopy.h"
#include "Thread.h"

#include <atomic>
#include <memory>
#include <string>
#include <uv.h>
#include <tbb/concurrent_queue.h>

class TcpServer : public Thread, private NoCopy
{

private:
	std::atomic<bool> opened;

	uv_tcp_t server;

	std::string host;
	int port;

	static void receive_new_connection(uv_stream_t *server, int status);

	virtual void on_run();
	virtual void on_stop();

public:
	TcpServer(int port, std::string host);
	virtual ~TcpServer();


};

