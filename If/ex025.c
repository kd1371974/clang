#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c", &moji);
	 
	if (moji >= 0x41 && moji <= 0x5A || moji >= 0x61 && moji <= 0x7A) {
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else {
		if (moji >= 0x30 && moji <= 0x39) {
			printf("�����ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
}