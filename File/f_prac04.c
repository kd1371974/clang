#include<stdio.h>
#define Sol_Num 3
typedef struct {
	char   Wname[20];
	int    bullet;
	float  atk;
} Weapon;
typedef struct {
	char   name[20];
	int    hp;
	Weapon wpn;
} Soldier;
void SetInfo(Soldier* s, char* filename);
void display(Soldier* s);
main()
{
	Soldier so1s[Sol_Num];
	SetInfo(so1s, "file04.txt");
	display(so1s);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	int i; //ループする用の変数
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < Sol_Num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s + i)->name, &(s + i)->hp, (s + i)->wpn.Wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("読み込みエラー\n");
			return;
	}
}
void display(Soldier* s) {
	int i;
	for (i = 0; i < Sol_Num; i++) {
		printf("%s 体力:%d\n", (s + i)->name, (s + i)->hp);
		printf("武器:%s  弾数:%d  攻撃力:%.2f\n",(s + i)->wpn.Wname, (s + i)->wpn.bullet, (s + i)->wpn.atk);
	}
}
