#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BiState{
Base=0,              //0000000　通常
Poison=1<<0,         //0000001　どく
Sleep=1<<1,          //0000010　ねむり
Paralysis=1<<2,      //0000100　まひ
Burn=1<<3,           //0001000　やけど
AtkUp=1<<4,          //0010000　攻撃力アップ
AtkDown=1<<5         //0100000　攻撃力ダウン
};
typedef unsigned int UINT;
typedef struct {
	char name[20];
	int hp;
	int mp;
	int atk;
	int def;
	UINT MyState;
}Chara;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UINT state;
}Mob;
void DisplayStatus(UINT s);
void ChangeFlag(UINT *s);
void ClearFlag(UINT* s);
//状態を管理する変数MyStateを宣言してBase(0)で初期化
int DisplayMenu(void);
main()
{
	//                name    hp   mp atk def MyState
	Chara chara = { "主人公",2000,200,100,50,Base };
	//               name hp stk def dtste
	Mob mob[3] = { {"敵A",100,50,20,Base},
				   {"敵B",1000,100,40,Base},
				   {"敵C",5000,500,100,Base} };
	srand(time(0));
}
int DisplayMenu(void) {
	char ch;
	printf("コマンド？\n");
	printf("1:たたかう\n2:ぼうぎょ\n");
	ch = getch();
}
void DisplayStatus(UINT s) {
	printf("*****現在の状態*****\n");
	if (s & Poison) {
		printf("どく\n");
	}
	if (s & Sleep) {
		printf("すいみん\n");
	}
	if (s & Paralysis) {
		printf("まひ\n");
	}
	if (s & Burn) {
		printf("やけど\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	printf("***************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("どの状態にしますか？\n");
		printf("1:どく 2:すいみん 3:まひ 4:やけど 5:攻撃↑ 6:攻撃↓ 0:入力終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case2:
			*s |= Sleep;
			break;
		case3:
			*s |= Paralysis;
			break;
		case4:
			*s |= Burn;
			break;
		case5:
			*s |= AtkUp;
			break;
		case6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態を回復しますか？\n");
		printf("1:どく 2:すいみん 3:まひ 4:やけど 5:攻撃↑ 6:攻撃↓ 0:入力終了>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case2:
			*s &= ~Sleep;
			break;
		case3:
			*s &= ~Paralysis;
			break;
		case4:
			*s &= ~Burn;
			break;
		case5:
			*s &= ~AtkUp;
			break;
		case6:
			*s &= ~AtkDown;
				break;
		default:
			break;
		}
	}
}

