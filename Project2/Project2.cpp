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
#include "header.h"

int main() { 
	for (int i = 0; i < 10; i++)
	{
		printf("helloworld%d\n",i);
	}

	int count=1;
	while ((count%3)!=0)
	{
		printf("helloworld%d\n",count);
		count++;
	}

	int count = 1;
	do
	{
		printf("helloworld%d\n", count);

	} while ((count % 3) != 0);


	//1번
	int num = 1, sum = 0;
	while (num!=0)
	{
		printf("숫자입력 : ");
		cin >> num;
		sum += num;
	}
	printf("총합 : %d\n", sum);


	num = 0, sum = 0;
	do
	{
		printf("숫자입력 : ");
		cin >> num;
		sum += num;

	} while (num!=0);

	printf("총합 : %d\n", sum);


	//2번
	int num2 = 0;
	printf("숫자입력 : ");
	cin >> num2;
	for (int i = 1; i < 10; i++)
	{
		printf("%d x %d = %d\n", num2,i,i*num2);
	}
	
	//3번
	int num3 = 0;
	printf("숫자입력 : ");
	cin >> num3;
	for (int i = 1; i <= num3; i++)
	{
		if ((i%2)!=0)
		{
			printf("%d ",i);
		}
		
	}
	printf("\n");


	//4번
	for (int i = 1; i <= 100; i++)
	{
		if ((i % 7) == 0)
		{
			printf("%d ", i);
		}

	}
	printf("\n");


	//5번
	int num5 = 0;
	printf("숫자입력 : ");
	cin >> num5;
	for (int i = 0; i < num5 ; i++)
	{
		for (int j = num5; j > i+1 ; j--) 
		{
			printf(" ");
		}
		
		for (int k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}

