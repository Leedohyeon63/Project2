#include "Practice.h"
#include "header.h"

int Randreturn(int Rnum1, int Rnum2)
{
	random_device Randomdivece;
	mt19937 Generate(Randomdivece());
	uniform_int_distribution<> RandfromDis(Rnum1, Rnum2);
	int Randomnum = RandfromDis(Generate);
	return Randomnum;
}

void ageret(int Age)
{
	printf("당신의 나이는 ? : ");
	cin >> Age;
	printf("\n당신의 나이는 %d살 입니다.", Age);
}

float Round(float Round)
{
	float PI = 3.14f;
	return Round*Round*PI;
}

bool Holzzak(int Num)
{
	if (Num%2==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int Grade(int Grade)
{
	enum Greadscale
	{
		A = 90,
		B = 80,
		C = 70,
		D = 60,
		F = 50
	};

	if (Grade > A)
	{
		return A;
	}
	else if (Grade > B)
	{
		return B;
	}
	else if (Grade > C)
	{
		return C;
	}
	else if (Grade > D)
	{
		return D;
	}
	else
	{
		return F;
	}
	return 0;
}

void invenPuls(int Inventory, int Bflag)
{

}

void invenRemove()
{

}

void invenToggle()
{

}

void Primide(int p)
{
	int P = p;
	for (int i = 0; i < P; i++)
	{
		for (int j = P-1; j > i; j--)
		{
			printf(" ");
		}

		for (int k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

}
