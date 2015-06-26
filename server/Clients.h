#pragma once

#include "NoCopy.h"
#include "Thread.h"
#include "TcpClient.h"

#include <tbb/concurrent_queue.h>
#include <tbb/concurrent_unordered_map.h>
#include <uv.h>

class Clients : public Thread, private NoCopy
{
private:
	uv_mutex_t mutex;

	tbb::concurrent_queue<uv_stream_t*> receive_queue;
	tbb::concurrent_queue<TcpClient*> available_clients;

	tbb::concurrent_unordered_map<uv_stream_t*, TcpClient*> connected;

	virtual void on_notify();

public:
	Clients();
	virtual ~Clients();

	void connect(uv_stream_t *client);
	void disconnect(uv_stream_t *stream, TcpClient *client);

};