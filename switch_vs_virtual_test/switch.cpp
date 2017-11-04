#include "switch.h"
#include "stdafx.h"
#include "switch.h"
#include "config.h"

void TestSwitch()
{
	BigRun* r = new BigRun();
	cout << "TestSwitch starts...\n";
	auto time0 = high_resolution_clock::now();
	bool flag = false;
	for (int i = 0; i < TestCount; i++)
	{
		if (flag)
			r->runType_ = BigRun::A;
		else
			r->runType_ = BigRun::B;
		r->Run(flag, !flag, flag, !flag, flag, !flag, flag, !flag, flag, !flag);
		flag = !flag;
	}

	auto time1 = high_resolution_clock::now();
	cout << "..took " << duration_cast<milliseconds>(time1 - time0).count() << "ms.\n";

	delete r;
}

