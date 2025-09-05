#include "Practice.h"
#include "header.h"

int Randreturn(int Rnum1, int Rnum2)
{
	int R = rand() % Rnum2;
	if (R < Rnum1)
	{
		Randreturn(Rnum1, Rnum2);
	}
	else
	{
		return R;
	}
}

void ageret(int Age)
{
	printf("\n당신의 나이는 %d살 입니다.", Age);
}

float Round(float Round)
{
	float PI = 3.14f;
	return Round * Round * PI;
}

bool Holzzak(int Num)
{
	if (Num % 2 == 0)
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

int invenPuls(int inventory, int Bflag)
{
	return inventory | Bflag;
}

int invenRemove(int inventory, int Bflag)
{
	return inventory & ~Bflag;
}

int invenSwitch(int inventory, int Bflag)
{
	return inventory ^ Bflag;
}

void Primide(int p)
{
	int P = p;
	for (int i = 0; i < P; i++)
	{
		for (int j = P - 1; j > i; j--)
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
