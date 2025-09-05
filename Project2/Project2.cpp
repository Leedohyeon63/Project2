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
#include<random>
using namespace std;

int main() { 
	random_device Randomdivece;
	mt19937 Generate(Randomdivece());
	//1번 
	uniform_int_distribution<> unifromDis(1, 6);
	int count = 0;
	for (int i = 0; i < 1000000; i++)
	{
		int	num = unifromDis(Generate);
		if (num == 6)
		{
			count++;
		}

	}
	printf("6은 %d번 나옴\n", count);


	//2번
	uniform_int_distribution<> rspfromDis(1, 3);
	int enemyscore = 0, myscore = 0, myRSP = 0; 
	enum RSP
		{
			가위 = 1,
			바위 = 2,
			보 = 3,
		};

	while (true)
	{
		int enemyRSP = rspfromDis(Generate);
		printf("1.가위 2.바위 3.보\n");
		::cin >> myRSP;
		switch (enemyRSP)
		{
		case 가위:
			if (myRSP==가위)
			{
				printf("비김\n");
				
			}
			else if (myRSP == 바위)
			{
				printf("이김\n");
				myscore++;
			}
			else if (myRSP == 보)
			{
				printf("짐\n");
				enemyscore++;
			}
			break;
		case 바위:
			if (myRSP == 가위)
			{
				printf("짐\n");
				enemyscore++;
			}
			else if (myRSP == 바위)
			{
				printf("비김\n");
			}
			else if(myRSP == 보)
			{
				printf("이김\n");
				myscore++;
			}
			break;
		case 보:
			if (myRSP == 가위)
			{
				printf("이김\n");
				myscore++;
			}
			else if (myRSP == 바위)
			{
				printf("짐\n");
				enemyscore++;
			}
			else if(myRSP == 보)
			{
				printf("비김\n");
			}
			break;
		default:
			break;
		}
		if (myscore>=3)
		{
			printf("승부에서 이김\n");
			break;
		}
		else if (enemyscore>=3)
		{
			printf("승부에서 짐\n");
			break;
		}
	}

	//3번
	uniform_int_distribution<> updownfromDis(1, 100);
	int mynumber = 0, life=5, comnumber= updownfromDis(Generate);
	printf("숫자 하나 입력\n");
	while (true)
	{
		mynumber = 0;
		::cin >> mynumber;
		if(mynumber==comnumber){
			printf("정답\n");
			break;
		}
		else if (mynumber > comnumber)
		{
			printf("다운\n");
			life--;
		}
		else if (mynumber < comnumber)
		{
			printf("업\n");
			life--;
		}
		if (life<=0)
		{
			printf("게임오버\n");
			break;

		}
	}

	//4번

	int choise = 0;
	int ItemToggle = 0;

	while (choise!=5)
	{

		enum 아이템
		{
			칼 = 0b0001,
			붕대 = 0b0010,
			손전등 = 0b0100,
			부적 = 0b1000
		};
		printf("현재 아이템 목록\n");
		printf("------------------\n");
		if ((ItemToggle & 칼) != 0)
		{
			printf("칼\n");
		}
		if ((ItemToggle & 붕대) != 0)
		{
			printf("붕대\n");
		}
		if ((ItemToggle & 손전등) != 0)
		{
			printf("손전등\n");
		}
		if ((ItemToggle & 부적) != 0)
		{
			printf("부적\n");
		}
		printf("------------------\n");
		printf("1. 칼 추가/삭제\n");
		printf("2. 붕대 추가/삭제\n");
		printf("3. 손전등 추가/삭제\n");
		printf("4. 부적 추가/삭제\n");
		printf("5. 종료\n");

		::cin >> choise;

		switch (choise)
		{
		case 1:
			ItemToggle ^= 칼;
			break;

		case 2:
			ItemToggle ^= 붕대;
			break;
		case 3:
			ItemToggle ^= 손전등;
			break;
		case 4:
			ItemToggle ^= 부적;
			break;
		case 5:
			break;
		default:
			break;
		}


	}


	//5번
	uniform_int_distribution<> gamblefromDis(1, 6);
	uniform_int_distribution<> combatfromDis(1, 3);
	int playerMoney = 10000, comMoney = 10000, myDICE = 0, comDICE = 0;
	int Bat = 0, myTotal = 0, comTotal = 0, next=0;
	int lastMywin = 1, lastComWin = 0;
	printf("게임 시작\n");

	while (true)
	{
		myTotal = 0;
		comTotal = 0;
		Bat = 0;
		printf("1차 주사위 굴리기\n");
		myDICE = gamblefromDis(Generate);
		comDICE = gamblefromDis(Generate);
		myTotal += myDICE;

		comTotal += comDICE;
		printf("플레이어 : %d, 컴퓨터 : %d\n", myDICE, comDICE);
		printf("배팅을 시작합니다\n");
		if (lastMywin==1)
		{
			printf("얼마를 배팅하시나요 : ");
			::cin >> Bat;
			if (playerMoney < Bat) {
				printf("배팅 금액이 부족합니다.\n");
				continue;
			}
			else
			{
				playerMoney -= Bat;
				comMoney -= Bat;
				printf("배팅 완료\n");
			}
		}
		else
		{
			Bat = combatfromDis(Generate) * 1000;
			printf("컴퓨터가 배팅합니다. 배팅금액 %d원,\n", Bat);
			playerMoney -= Bat;
			comMoney -= Bat;
			printf("배팅 완료\n.\n.\n.\n");
		}
		printf("2차 주사위 굴리기\n");
		myDICE = gamblefromDis(Generate);
		comDICE = gamblefromDis(Generate);
		myTotal += myDICE;
		comTotal += comDICE;
		printf("플레이어 : %d, 컴퓨터 : %d\n.\n.\n", myDICE, comDICE);
		printf("플레이어 총합 %d, 컴퓨터 총합 %d", myTotal, comTotal);
		if (myTotal > comTotal)
		{
			printf("플레이어 승리\n.\n.\n");
			playerMoney += 2*Bat;
			lastMywin = 0;
		}
		else if(myTotal < comTotal)
		{
			printf("컴퓨터 승리\n.\n.\n");
			comMoney += 2 * Bat;
			lastMywin = 1;
		}
		else
		{
			printf("무승부\n.\n.\n");
			lastMywin = 1;
		}

		if (playerMoney<=0)
		{
			printf("컴퓨터 승리");
			break;
		}
		else if (comMoney<=0)
		{
			printf("플레이어 승리");
			break;
		}
		printf("현재 잔액 플레이어 %d원, 컴퓨터 %d원, 다음 게임 시작하시려면 아무 입력이나...\n.\n.\n", playerMoney , comMoney);
		::cin >> next;
	
	}
	

	//홀짝
	uniform_int_distribution<> bakarafromDis(1, 2);
	int baseMoney = 100, winrate = 0, bakaraBat = 0, mybakarachoise = 0, Batweight=1;
	
	printf("홀짝 시작\n");
	while (true)
	{
		int bakara = bakarafromDis(Generate);
		printf("현재 재산 %d원. . .\n\n", baseMoney);
		printf("홀? 짝? : 1. 홀, 2.짝\n");
		::cin >> mybakarachoise;
		bakaraBat = Batweight * 100;
		if (mybakarachoise==bakara)
		{
			printf("플레이어 승리\n");
			winrate++;
			printf("현재 %d연승중. . .\n", winrate);
			printf("(1) 이긴 금액을 모두 다시 한 번에 배팅(연승 도전)\n");
			printf("(2) 이긴 금액을 얻고, 다시 100원부터 새로 배팅 시작\n");
			printf("선택하세요. . .\n");
			::cin >> mybakarachoise;
			if (mybakarachoise==1)
			{
				Batweight *= 2;
				printf("현재 베팅금액 %d원. . .\n\n", Batweight*100);
				continue;
			}
			else if(mybakarachoise==2)
			{
				baseMoney += 2 * bakaraBat;
				Batweight = 1;
				winrate = 0;
				continue;
			}
		}
		else
		{
			printf("플레이어 패배\n");
			baseMoney -= bakaraBat;
			Batweight = 1;
			winrate = 0;
			if (baseMoney <= 100)
			{
				printf("게임 오버. . .\n");
				break;
			}
		}
	}

	return 0;
}

