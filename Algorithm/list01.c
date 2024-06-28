#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct NODE {
	int id;
	char name[11];
	struct NODE* pnext;
}NODE;

NODE head = { 0,"HEAD",NULL };

void show(void);
void append(int id, char* name);
void allfree(void);

main(void)
{
	append(8, "While");
	append(1, "Black");
	append(33, "Pink");
	show();

	allfree();
}
void show(void)
{
	NODE* p1;
	printf("\n------------------------------------------------\n");
	p1 = &head;
	while (p1 != NULL) {
		printf("アドレスは%p　IDは%-5d 名前は%-10s　NEXTは%p\n", p1, p1->id, p1->name, p1->pnext);
	}
}
