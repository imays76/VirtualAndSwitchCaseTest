#pragma once


class BigRun
{
public:
	enum RunType { A, B };
	RunType runType_;

	void Run(bool a, bool b, bool c, bool d, bool e, bool f, bool g, bool h, bool i, bool j)
	{
		switch (runType_)
		{
		case A:
			// A 일을 수행
			srand(a | b | c | d | e | f | g | h | i | j);
			break;
		case B:
			// B 일을 수행
			srand(a | b | c | d | e | f | g | h | i | j);
			break;
		}
	}
};

void TestSwitch();