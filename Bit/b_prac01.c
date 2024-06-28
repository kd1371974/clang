#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum BiState{
Base=0,              //0000000�@�ʏ�
Poison=1<<0,         //0000001�@�ǂ�
Sleep=1<<1,          //0000010�@�˂ނ�
Paralysis=1<<2,      //0000100�@�܂�
Burn=1<<3,           //0001000�@�₯��
AtkUp=1<<4,          //0010000�@�U���̓A�b�v
AtkDown=1<<5         //0100000�@�U���̓_�E��
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
//��Ԃ��Ǘ�����ϐ�MyState��錾����Base(0)�ŏ�����
int DisplayMenu(void);
main()
{
	//                name    hp   mp atk def MyState
	Chara chara = { "��l��",2000,200,100,50,Base };
	//               name hp stk def dtste
	Mob mob[3] = { {"�GA",100,50,20,Base},
				   {"�GB",1000,100,40,Base},
				   {"�GC",5000,500,100,Base} };
	srand(time(0));
}
int DisplayMenu(void) {
	char ch;
	printf("�R�}���h�H\n");
	printf("1:��������\n2:�ڂ�����\n");
	ch = getch();
}
void DisplayStatus(UINT s) {
	printf("*****���݂̏��*****\n");
	if (s & Poison) {
		printf("�ǂ�\n");
	}
	if (s & Sleep) {
		printf("�����݂�\n");
	}
	if (s & Paralysis) {
		printf("�܂�\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	printf("***************\n");
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�ǂ� 2:�����݂� 3:�܂� 4:�₯�� 5:�U���� 6:�U���� 0:���͏I��>");
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
		printf("�ǂ̏�Ԃ��񕜂��܂����H\n");
		printf("1:�ǂ� 2:�����݂� 3:�܂� 4:�₯�� 5:�U���� 6:�U���� 0:���͏I��>");
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

