#include<stdio.h>
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
void SetInfo(Soldier*s,char*filename);
void display(Soldier s);
main()
{
	Soldier so1;
	SetInfo(&so1, "file03.txt");
	display(so1);
}
void SetInfo(Soldier* s, char* filename) {
	FILE* fp;
	fp = fopen(filename, "r");
	fscanf(fp, "%s%d%s%d%f",s->name, &s->hp, s->wpn.Wname, &s->wpn.bullet, &s->wpn.atk);
		fclose(fp);
}
void display(Soldier s) {
	printf("%s ‘Ì—Í:%d\n", s.name, s.hp);
	printf("•Ší:%s  ’e”:%d  UŒ‚—Í:%.2f\n", s.wpn.Wname, s.wpn.bullet, s.wpn.atk);
}
