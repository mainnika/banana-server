#include "Thread.h"

#include "easylogging++.h"

#include <iostream>

Thread::Thread():
	is_started(false)
{
	uv_loop_init(&this->loop);

	this->async.data = static_cast<void*>(this);
	this->loop.data = static_cast<void*>(this);
}

Thread::~Thread()
{
	if (this->is_started)
		this->stop();

	uv_loop_close(&this->loop);
}

void Thread::thread_notify(uv_async_t *handle)
{
	Thread* self = static_cast<Thread*>(handle->data);

	if (!self->is_started)
		return;

	self->on_notify();
}

void Thread::thread_worker(void *arg)
{
	Thread* self = static_cast<Thread*>(arg);

	self->on_run();

	uv_async_init(&self->loop, &self->async, &Thread::thread_notify);
	uv_sem_post(&self->semaphore);
	uv_run(&self->loop, UV_RUN_DEFAULT);
	uv_close((uv_handle_t*)&self->async, NULL);

	self->on_stop();
}

uv_loop_t& Thread::get_loop()
{
	return this->loop;
}

void Thread::notify()
{
	uv_async_send(&this->async);
}

void Thread::start()
{
	if (this->is_started.exchange(true))
	{
		LOG(INFO) << "Thread " << static_cast<void*>(this) << " already started";
		return;
	}

	uv_sem_init(&this->semaphore, 0);
	uv_thread_create(&this->thread_id, &Thread::thread_worker, static_cast<void*>(this));
	uv_sem_wait(&this->semaphore);
	uv_sem_destroy(&this->semaphore);
}

void Thread::stop()
{
	if (!this->is_started.exchange(false))
	{
		LOG(INFO) << "Thread " << static_cast<void*>(this) << " already stopped";
		return;
	}

	uv_stop(&this->loop);
	uv_async_send(&this->async);
	uv_thread_join(&this->thread_id);
}

void Thread::on_notify()
{
	LOG(INFO) << "Thread " << static_cast<void*>(this) << " notified";
}

void Thread::on_run()
{
	LOG(INFO) << "Thread " << static_cast<void*>(this) << " run";
}

void Thread::on_stop()
{
	LOG(INFO) << "Thread " << static_cast<void*>(this) << " stopped";
}