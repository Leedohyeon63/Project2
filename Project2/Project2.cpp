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

int main() { //엔트리 포인트(코드가 시작되는 곳)
	int a = 10;
	int b = 0;
	cin >> b;
	if (b < 60)
	{
		printf("f");
	}
	else if (b < 70)
	{
		printf("d");
	}
	else if (b < 80)
	{
		printf("c");
	}
	else if (b < 90)
	{
		printf("b");
	}
	else
	{
		printf("a");
	}

	cin >> a;
	switch (a)
	{
	case 1:
		printf("1");
		break;
	case 3:
		printf("3");
		break;
	case 5:
		printf("5");
		break;
	default:
		printf("x");
		break;
	}




	return 0;
}

