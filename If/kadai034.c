#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("�啶���ł�\n");
	}
	else {
		if (moji >= 0x61 && moji <= 0x7A) {
			printf("�������ł�\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}