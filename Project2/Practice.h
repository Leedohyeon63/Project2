#pragma once
int Randreturn(int Rnum1, int Rnum2);
void ageret(int Age);
float Round(float Round);
bool Holzzak(int Num);
int Grade(int Grade);
int invenPuls(int inventory, int Bflag);
int invenRemove(int inventory, int Bflag);
int invenSwitch(int Inventory, int Bflag);
void Primide(int p);
template <typename T> //min출력
T Min(T num1, T num2) {
	if (num1 < num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
template <typename T>//max출력
T Max(T num1, T num2) {
	if (num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
template <typename T>//중간값 출력
T Clamp(T min, T max, T value) {
	if(value - min < 0)
	{
		return min;
	}
	else if (value - max > 0)
	{
		return max;
	}
	else
	{
		return value;
	}
}
template <typename T>//팩토리얼
T facto(T num1) {
	while (num1 <= 1)
	{
		return 1;
	}
	return num1 * facto(num1 - 1);
}