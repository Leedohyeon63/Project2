#pragma once
int sum(int a, int b);// 두 수를 더해서 리턴하는 함수
void printHelloworld();// 헬로월드를 출력하는 함수
int multiPly(int num1, int num2=2);// 두 수의 곱을 리턴하는 함수
int TestRecyrcive(int a);
float sum(float a, float b);
template <typename T> 
T add(T num1, T num2) {
	return num1 + num2;
}
template <typename T>
T sub(T num1, T num2) {
	return num1 - num2;
}
template <typename T>
T mul(T num1, T num2) {
	return num1 * num2;
}
template <typename T>
T div(T num1, T num2) {
	return num1 / num2;
}
int Sqare();