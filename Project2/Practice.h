#pragma once
int Randreturn(int Rnum1, int Rnum2);
void ageret(int Age);
float Round(float Round);
bool Holzzak(int Num);
int Grade(int Grade);
void invenPuls(int Inventory, int Bflag);
void invenRemove();
void invenToggle();
void Primide(int p);
template <typename T>
T Min(T num1, T num2) {
	return min(num1,num2);
}
template <typename T>
T Max(T num1, T num2) {
	return max(num1, num2);
}
template <typename T>
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
template <typename T>
T facto(T num1) {
	while (num1 <= 1)
	{
		return 1;
	}
	return num1 * facto(num1 - 1);
}