#include "Practice.h"
#include "header.h"

int Randreturn(int Rnum1, int Rnum2)//1������ �� �� ���̸� ������ ���
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

void ageret(int Age)//2������ ���� ���
{
	printf("\n����� ���̴� %d�� �Դϴ�.", Age);
}

float Round(float Round)//3������ ������ �޾� �� ���� ���
{
	float PI = 3.14f;
	return Round * Round * PI;
}

bool Holzzak(int Num)//4������ Ȧ������ ¦������ ���ؼ� t/f���
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

int Grade(int Grade)//5������ �������� �ٸ��� ����
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

int invenPuls(int inventory, int Bflag)//6������ �κ��丮 ��Ʈ�� or�ؼ� ������ �߰� �ϴ� �Լ�
{
	return inventory | Bflag;
}

int invenRemove(int inventory, int Bflag)//6������ �κ��丮 ��Ʈ�� and�ؼ� ������ �߰� �ϴ� �Լ�
{
	return inventory & ~Bflag;
}

int invenSwitch(int inventory, int Bflag)//6������ �κ��丮 ��Ʈ�� xor�ؼ� ������ ��۷� �¿����ϴ� �Լ�
{
	return inventory ^ Bflag;
}

void Primide(int p)//7������ �Ƕ�̵� ����ϴ� �Լ�
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
