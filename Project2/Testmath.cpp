#include <iostream>
#include "Testmath.h"
using namespace std;

int sum(int a, int b)
{
	return a+b;
}

float sum(float a, float b)
{
	return a+b;
}

inline int Sqare(int num)
{
	return num*num;
}


void printHelloworld()
{
	printf("");
}

int multiPly(int num1, int num2)
{
	return num1*num2;
}

int TestRecyrcive(int a)
{
	if (a<2)
	{
		return 1;
	}
	printf("%d", a);
	return TestRecyrcive(a-1);
}


