#include<stdio.h>
#include<string.h>
void sort(int* x, int y, int order);
main(void)
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int i;
	char str[256];
	printf("�\�[�g���������:");
	gets(str);
	if (strcmp(str, "����") == 0) {
		sort(data, 8, 0);
	}
	else if (strcmp(str, "�~��") == 0) {
		sort(data, 8, 1);
	}
	else {
		printf("�\�[�g�����́A�������~���œ��͂��Ă�������\n");
		return 1;
	}
	for (i = 0; i < 8; i++) {
		printf("%d", data[i]);
	}
	return 0;
}

void sort(int* x, int y, int order)
{
	int i, j, w;
	switch (order) {
	case 0:
		for (i = 0; i < y - 1; i++) {
			for (j = i + 1; j < y; j++) {
				if (*(x + i) > *(x + j)) {
					w = *(x + i);
					*(x + i) = *(x + j);
					*(x + j) = w;
				}
			}
		}
		break;
	case1:for (i = 0; i < y - 1; i++) {
		for (j = i + 1; j < y; j++) {
			if (*(x + i) < *(x + j)) {
				w = *(x + i);
				*(x + i) = *(x + j);
				*(x + j) = w;
			}
		}
	}
	break;
	}
}