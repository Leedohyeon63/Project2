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
	//int num1 = 0, num2 = 0, swap = 0;
	////1번 별찍기
	//printf("  *  \n *** \n*****\n");
	////2번 미로 그리기
	//printf("□□□□□□□□\n□  □    □  □\n□     □     □\n□□□□□□□□\n");
	////3번 숫자 바꾸기
	//printf("1번 숫자 : ");
	//cin >> num1;
	//swap = num1;
	//printf("2번 숫자 : ");
	//cin >> num2;
	//num1 = num2;
	//num2 = swap;
	//printf("1번 숫자는 %d, 2번 숫자는 %d\n", num1, num2);
	////4번 사각형 넓이 구하기
	//printf("가로 : ");
	//cin >> num1;
	//printf("세로 : ");
	//cin >> num2;
	//printf("사각형의 넓이는 %d\n", num1*num2);
	////5번 나머지 구하기
	//printf("제수 : ");
	//cin >> num1;
	//printf("피제수 : ");
	//cin >> num2;
	//printf("나머지는 %d", num2 - (num2/num1)*num1);
	int time = 0, si=0,bun=0,cho=0;
	int money = 0, c_500 = 0, c_100 = 0, c_50 = 0, c_10 = 0;
	int number = 0, hrn = 0, ten = 0, one = 0;


	printf("몇 초 : ");
	cin >> time;
	si = time / 3600;
	bun = (time % 3600) / 60;
	cho = (time % 60);
	printf("%d시, %d분, %d초\n", si, bun, cho);

	printf("얼마 : ");
	cin >> money;
	c_500 = money / 500;
	c_100 = (money % 500) / 100;
	c_50 = (money % 100) / 50;
	c_10 = (money % 50) / 10;
	printf("500원 %d개, 100원 %d개, 50원 %d개, 10원 %d개\n", c_500, c_100, c_50, c_10);

	printf("숫자 : ");
	cin >> number;
	hrn = number / 100;
	ten = (number % 100) / 10;
	one = number % 10;
	printf("백의자리 %d, 십의자리 %d, 일의자리 %d", hrn,ten,one);


	return 0;

}

