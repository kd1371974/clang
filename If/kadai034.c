#include<stdio.h>
main()
{
	char moji;
	printf("アルファベット？");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("大文字です\n");
	}
	else {
		if (moji >= 0x61 && moji <= 0x7A) {
			printf("小文字です\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}