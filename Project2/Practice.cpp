#include "Practice.h"
#include "header.h"

int Randreturn(int Rnum1, int Rnum2)//1번문제 두 값 사이를 랜덤값 출력
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

void ageret(int Age)//2번문제 나이 출력
{
	printf("\n당신의 나이는 %d살 입니다.", Age);
}

float Round(float Round)//3번문제 반지름 받아 원 넓이 출력
{
	float PI = 3.14f;
	return Round * Round * PI;
}

bool Holzzak(int Num)//4번문제 홀수인지 짝수인지 구해서 t/f출력
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

int Grade(int Grade)//5번문제 성적따라 다른값 리턴
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

int invenPuls(int inventory, int Bflag)//6번문제 인벤토리 비트값 or해서 아이템 추가 하는 함수
{
	return inventory | Bflag;
}

int invenRemove(int inventory, int Bflag)//6번문제 인벤토리 비트값 and해서 아이템 추가 하는 함수
{
	return inventory & ~Bflag;
}

int invenSwitch(int inventory, int Bflag)//6번문제 인벤토리 비트값 xor해서 아이템 토글로 온오프하는 함수
{
	return inventory ^ Bflag;
}

void Primide(int p)//7번문제 피라미드 출력하는 함수
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
