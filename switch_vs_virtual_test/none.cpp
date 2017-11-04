#include "stdafx.h"
#include "none.h"
#include "config.h"



void TestNone()
{
	cout << "TestNone starts...\n";
	auto time0 = high_resolution_clock::now();
	bool flag = false;
	for (int i = 0; i < TestCount; i++)
	{
		srand(flag | !flag | flag | !flag | flag);
		flag = !flag;
	}

	auto time1 = high_resolution_clock::now();
	cout << "..took " << duration_cast<milliseconds>(time1 - time0).count() << "ms.\n";
}




void TestNone_noFlipFlop()
{
	cout << "TestNone_noFlipFlop starts...\n";
	auto time0 = high_resolution_clock::now();
	for (int i = 0; i < TestCount; i++)
	{
		srand(0);
	}

	auto time1 = high_resolution_clock::now();
	cout << "..took " << duration_cast<milliseconds>(time1 - time0).count() << "ms.\n";
}
