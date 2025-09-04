//주석 : 프로그램에 영향을 끼치지 않는 부분
//ctrl + d = 한줄 복사하기
// shift + delete = 한줄 삭제하기 
// shift + 화살표 = 블럭 잡기
// alt + 화살표 = 라인 바꾸기
// alt + shift + 화살표 = 블럭 잡기
//ctrl + B + R = 프로젝트 리빌드
#include <iostream>
#include<stdio.h>
#include<cstdio>
#include<random>
#include "header.h"

int main() { 
	random_device Randomdivece;
	mt19937 Generate(Randomdivece());
	//1번
	
	uniform_int_distribution<> unifromDis(1, 6);
	int count = 0;
	for (int i = 0; i < 1000000; i++)
	{
		int	num = unifromDis(Generate);
		if (num == 6)
		{
			count++;
		}

	}
	printf("%d\n", count);


	//2번
	uniform_int_distribution<> rspfromDis(1, 3);
	int enemyscore = 0, myscore = 0, myRSP = 0; 
	enum RSP
		{
			가위 = 1,
			바위 = 2,
			보 = 3,
		};

	while (true)
	{
		int enemyRSP = rspfromDis(Generate);
		printf("1.가위 2.바위 3.보\n");
		cin >> myRSP;
		switch (enemyRSP)
		{
		case 가위:
			if (myRSP==가위)
			{
				printf("비김\n");
				
			}
			else if (myRSP == 바위)
			{
				printf("이김\n");
				myscore++;
			}
			else
			{
				printf("짐\n");
				enemyscore++;
			}
			break;
		case 바위:
			if (myRSP == 가위)
			{
				printf("짐\n");
				enemyscore++;
			}
			else if (myRSP == 바위)
			{
				printf("비김\n");
			}
			else
			{
				printf("이김\n");
				myscore++;
			}
			break;
		case 보:
			if (myRSP == 가위)
			{
				printf("이김\n");
				myscore++;
			}
			else if (myRSP == 바위)
			{
				printf("짐\n");
				enemyscore++;
			}
			else
			{
				printf("비김\n");
			}
			break;
		default:
			break;
		}
		if (myscore==3)
		{
			printf("승부에서 이김\n");
			break;
		}
		else if (enemyscore==3)
		{
			printf("승부에서 짐\n");
			break;
		}
	}

	//3번
	uniform_int_distribution<> updownfromDis(1, 100);
	int mynumber = 0, life=5, comnumber= updownfromDis(Generate);
	
	while (true)
	{
		mynumber = 0;
		cin >> mynumber;
		if(mynumber==comnumber){
			printf("정답\n");
			break;
		}
		else if (mynumber > comnumber)
		{
			printf("다운\n");
			life--;
		}
		else if (mynumber < comnumber)
		{
			printf("업\n");
			life--;
		}
		if (life==0)
		{
			printf("게임오버");
			break;

		}
	}

	//4번







	return 0;
}

