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

float Avg(float a, float b, float c)
{
	return (a+b+c)/3;
}

float Sale(float Price, float salescale)
{
	return Price*((100-salescale)/100);
}


int Dice() {
	int R = rand() % 6 + 1;
	return R;
}


void SliceNum() {
	int N = 0, slice = 10, slicecount = 1, sum = 0;
	cin >> N;
	while (true)
	{
		if (N > slice)
		{
			slice *= 10;
			slicecount++;
		}
		else
		{
			for (int i = 0; i < slicecount; i++)
			{
				slice /= 10;
				sum += N / slice;
				printf("%d ,", N / slice);
				N = N % slice;
			}
			printf("�ڸ��� �� : %d", sum);
			break;
		}
	}
}

void Binary(){
}

void SlotMeachin() {
	int seedMoney = 10000, MinBat = 100, MyBat = 0;

	printf("������ �����մϴ�.\n");
	while (true)
	{
		printf("���� �ܾ� %d. . .\n", seedMoney);
		printf("������ �ݾ��� �����ּ��� : ");
		cin >> MyBat;
		if (MyBat < MinBat || MyBat > seedMoney)
		{
			printf("\n�߸��� �ݾ��Դϴ�. . .\n");
			continue;
		}
		else
		{
			seedMoney -= MyBat;
			int slot1 = rand() % 10 + 1;
			int slot2 = rand() % 10 + 1;
			int slot3 = rand() % 10 + 1;
			if (slot1 == 7 && slot2 ==7 && slot3 ==7)
			{
				printf("\n*777*\n");
				seedMoney += MyBat * 10000;
				continue;
			}
			else if (slot1==slot2==slot3)
			{
				printf("\n*����*\n");
				seedMoney += MyBat * 50;
				continue;
			}
			else
			{
				printf("\n��\n");
				if (seedMoney <= 0)
				{
					printf("�Ļ�. . .");
					break;
				}
				continue;
			}
		}
	}
}
void FightClub() {
	int baseHP = 100, enemyHP = 100, Act = 0;

	while (true)
	{
		int Crit = rand() % 10 + 1;
		int myDamge = rand() % 10 + 5;
		int enemyDamge = rand() % 10 + 5;
		printf("1. ���� : ");
		cin >> Act;
		if (Crit == 3)
		{
			printf("\nũ��Ƽ�� �������� ������. . .\n");
			enemyHP -= 2 * myDamge;
		}
		else
		{
			printf("\n������ %d�� ���ظ� ������. . .\n", myDamge);
			enemyHP -=  myDamge;
		}
		printf("\n���� �����ߴ�. . .\n");
		if (Crit==7)
		{
			printf("ũ��Ƽ�� �������� �Ծ���. . .\n");
			baseHP -= 2 * enemyDamge;
		}
		else
		{
			printf("\n������ %d�� ���ظ� �Ծ���. . .\n", enemyDamge);
			baseHP -= enemyDamge;
		}
		printf("\n�� ü�� : %d, �� ü�� : %d\n", baseHP, enemyHP);
		if (baseHP <= 0)
		{
			printf("�й��ߴ�. . .");
			break;
		}
		else if (enemyHP <= 0)
		{
			printf("�¸��ߴ�. . .");
			break;
		}
	}
}
