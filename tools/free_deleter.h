#pragma once
#include <cstdlib>

template<typename T = void>
struct free_delete
{
    void operator()(T* x) { free(x); }
};