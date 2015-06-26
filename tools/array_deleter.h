#pragma once
//#include <>

template<typename T = void>
struct array_deleter
{
    void operator()(T* x) { delete [] x; }
};