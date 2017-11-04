#pragma once
#include "config.h"

class RunBase
{
public:
	virtual void Run(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j) = 0;
};

class RunA :public RunBase
{
public:
	virtual void Run(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j) override {
		srand(a | b | c | d | e | f | g | h | i | j);
	}
};

class RunB :public RunBase
{
public:
	virtual void Run(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j) override {
		srand(a | b | c | d | e | f | g | h | i | j);
	}
};

void TestVirtualFunction();;
