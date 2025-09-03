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
/* -3을 2진수로 표현하는 방법 
* 3을 2진수로 바꾸면 0000 0011
* 1. 1의 보수 만들기 1111 1100
* 2. 2의 보수 만들기 1111 1101
*  (1번에 1 더하면 됨)
*



*/ 


int main() { //엔트리 포인트(코드가 시작되는 곳)
	 
	//float n1 = 10.0f;
	//float n2 = 15.0;
	//cin >> n1 >> n2;
	//printf("n1 : %f \nn2 : %.2f", n1, n2);

	float PI = 3.14f, R = 0.0f;
	cin >> R;
	printf("넓이 : %f", 2 * PI * R);
	

	return 0;

}

