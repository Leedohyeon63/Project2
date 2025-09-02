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
	int num1 = 0, num2 = 0, swap = 0;
	//1번 별찍기
	printf("  *  \n *** \n*****\n");
	//2번 미로 그리기
	printf("□□□□□□□□\n□  □    □  □\n□     □     □\n□□□□□□□□\n");
	//3번 숫자 바꾸기
	printf("1번 숫자 : ");
	cin >> num1;
	swap = num1;
	printf("2번 숫자 : ");
	cin >> num2;
	num1 = num2;
	num2 = swap;
	printf("1번 숫자는 %d, 2번 숫자는 %d\n", num1, num2);
	//4번 사각형 넓이 구하기
	printf("가로 : ");
	cin >> num1;
	printf("세로 : ");
	cin >> num2;
	printf("사각형의 넓이는 %d\n", num1*num2);
	//5번 나머지 구하기
	printf("제수 : ");
	cin >> num1;
	printf("피제수 : ");
	cin >> num2;
	printf("나머지는 %d", num2 - (num2/num1)*num1);


	return 0;

}

