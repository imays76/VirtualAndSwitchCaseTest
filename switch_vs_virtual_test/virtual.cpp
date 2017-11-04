#include "stdafx.h"
#include "virtual.h"



void TestVirtualFunction()
{
	RunBase* r = new RunA();
	RunBase* r2 = new RunB();
	cout << "TestVirtualFunction starts...\n";
	auto time0 = high_resolution_clock::now();
	bool flag = false;
	for (int i = 0; i < TestCount; i++)
	{
		if (!flag)
			r->Run(flag, !flag, flag, !flag, flag, !flag, flag, !flag, flag, !flag);
		else
			r2->Run(flag, !flag, flag, !flag, flag, !flag, flag, !flag, flag, !flag);
		flag = !flag;
	}
	auto time1 = high_resolution_clock::now();
	cout << "..took " << duration_cast<milliseconds>(time1 - time0).count() << "ms.\n";

	delete r;
	delete r2;
}
