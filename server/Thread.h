#pragma once

#include <atomic>
#include <memory>
#include <uv.h>

class Thread
{
private:
	uv_thread_t thread_id;

	std::atomic<bool> is_started;

	uv_async_t async;
	uv_loop_t loop;
	uv_sem_t semaphore;

	static void thread_notify(uv_async_t *handle);
	static void thread_worker(void *arg);

protected:
	uv_loop_t& get_loop();

public:
	Thread();
	virtual ~Thread();

	void notify();
	void start();
	void stop();

	virtual void on_notify();
	virtual void on_run();
	virtual void on_stop();
};

