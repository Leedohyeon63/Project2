#include "header.h"
#include "Testmath.h"
#include "Practice.h"

int main() {
	printf("%d\n", Randreturn(2, 10));
	ageret(5);
	printf("%f\n", Round(10));
	if (Holzzak(4))
	{
		printf("홀");
	}
	else
	{
		printf("짝");
	}
	printf("%d\n", Grade(74));
	printf("%d\n", Min(7,4));
	printf("%d\n", Max(7,4));
	printf("%d\n", Clamp(7,4,9));
	printf("%d\n", facto(4));
	int choise = 0;
	int itemchoise = 0;
	int inventory = 0;

	enum 아이템
	{
		칼 = 0b0001,
		붕대 = 0b0010,
		손전등 = 0b0100,
		부적 = 0b1000
	};

	while (choise != 4)
	{
		printf("메뉴창\n");
		printf("------------------\n");
		printf("1. 아이템 설정\n");
		printf("2. 아이템 해제\n");
		printf("3. 아이템 토글\n");
		printf("4. 종료\n");
		printf("------------------\n선택 : ");
		::cin >> choise;
		switch (choise)
		{
		case 1:
			printf("\n추가할 아이템 선택\n1. 칼, 2, 붕대, 3, 손전등, 4, 부적\n");
			cin >> itemchoise;
			inventory =	invenPuls(inventory, pow(2,itemchoise-1));
			break;
		case 2:
			printf("\n제거할 아이템 선택\n1. 칼, 2, 붕대, 3, 손전등, 4, 부적\n");
			cin >> itemchoise;
			inventory = invenRemove(inventory, pow(2, itemchoise - 1));
			break;
		case 3:
			printf("\n토글할 아이템 선택\n1. 칼, 2, 붕대, 3, 손전등, 4, 부적\n");
			cin >> itemchoise;
			inventory = invenSwitch(inventory, pow(2, itemchoise - 1));
			break;
		case 4:
			break;
		default:
			break;
		}
		printf("\n현재 인벤토리: \n");
		if (inventory & 칼) {
			cout << "[칼] ";
		}
		if (inventory & 붕대) {
			cout << "[붕대] ";
		}
		if (inventory & 손전등) {
			cout << "[손전등] ";
		}
		if (inventory & 부적) {
			cout << "[부적] ";
		}

	}


}

