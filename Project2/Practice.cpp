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
			printf("자리의 합 : %d", sum);
			break;
		}
	}
}

void Binary(){
}

void SlotMeachin() {
	int seedMoney = 10000, MinBat = 100, MyBat = 0;

	printf("게임을 시작합니다.\n");
	while (true)
	{
		printf("현재 잔액 %d. . .\n", seedMoney);
		printf("베팅할 금액을 말해주세요 : ");
		cin >> MyBat;
		if (MyBat < MinBat || MyBat > seedMoney)
		{
			printf("\n잘못된 금액입니다. . .\n");
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
				printf("\n*잭팟*\n");
				seedMoney += MyBat * 50;
				continue;
			}
			else
			{
				printf("\n꽝\n");
				if (seedMoney <= 0)
				{
					printf("파산. . .");
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
		printf("1. 공격 : ");
		cin >> Act;
		if (Crit == 3)
		{
			printf("\n크리티컬 데미지를 입혔다. . .\n");
			enemyHP -= 2 * myDamge;
		}
		else
		{
			printf("\n적에게 %d의 피해를 입혔다. . .\n", myDamge);
			enemyHP -=  myDamge;
		}
		printf("\n적이 공격했다. . .\n");
		if (Crit==7)
		{
			printf("크리티컬 데미지를 입었다. . .\n");
			baseHP -= 2 * enemyDamge;
		}
		else
		{
			printf("\n적에게 %d의 피해를 입었다. . .\n", enemyDamge);
			baseHP -= enemyDamge;
		}
		printf("\n내 체력 : %d, 적 체력 : %d\n", baseHP, enemyHP);
		if (baseHP <= 0)
		{
			printf("패배했다. . .");
			break;
		}
		else if (enemyHP <= 0)
		{
			printf("승리했다. . .");
			break;
		}
	}
}
