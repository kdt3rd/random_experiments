#include <stdio.h>
#include <iostream>

extern "C" void foobar();

static void myinitfunc() __attribute__((constructor(101)));
static void myshutfunc() __attribute__((destructor(101)));

void foobar()
{
    std::cout << "Hello, world!" << std::endl;
}

void myinitfunc()
{
    std::cerr << __func__ << std::endl;
}

void myshutfunc()
{
    std::cerr << __func__ << std::endl;
}

