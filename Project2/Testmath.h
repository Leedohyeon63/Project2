#pragma once
int sum(int a, int b);// �� ���� ���ؼ� �����ϴ� �Լ�
void printHelloworld();// ��ο��带 ����ϴ� �Լ�
int multiPly(int num1, int num2=2);// �� ���� ���� �����ϴ� �Լ�
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