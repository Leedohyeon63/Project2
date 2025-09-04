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
	//1번
	int a = 0;
	printf("숫자 입력 : ");
	cin >> a;
	if (a > 0)
	{
		printf("양수\n");
	}
	else if (a==0)
	{
		printf("0\n");
	}
	else
	{
		printf("음수\n");
	}

	//2번
	printf("숫자 입력 : ");
	cin >> a;
	if (a%2==0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
	}

	//3번
	int b = 0;
	printf("두 수 입력 : ");
	cin >> a;
	cin >> b;
	if (a-b > 0)
	{
		printf("a가 더 크다\n");
	}
	else if (a==b)
	{
		printf("같다\n");
	}
	else
	{
		printf("b가 더 크다\n");
	}

	//4번
	printf("나이랑 키 입력 : ");
	cin >> a;
	cin >> b;
	if (a > 5 && b >= 120)
	{
		printf("탑승 가능\n");
	}
	else
	{
		printf("불가능\n");
	}

	//5번
	printf("점수 입력 : ");
	cin >> a;
	if (a<60)
	{
		printf("f\n");
	}
	else if (a<70)
	{
		printf("d\n");
	}
	else if (a<80)
	{
		printf("c\n");
	}
	else if (a<90)
	{
		printf("b\n");
	}
	else
	{
		printf("a\n");
	}

	//6번
	int c = 0;
	printf("세 과목 점수 입력 : ");
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>=40 && b >= 40 && c>=40)
	{
		if ((a + b + c) / 3 >= 60)
		{
			printf("합격\n");
		}
		else
		{
			printf("불합격\n");
		}
	}
	else
	{
		printf("불합격\n");
	}

	return 0;
}

