#include<stdio.h>
main()
{
	char moji;
	printf("1•¶Žš“ü—ÍH");
	scanf("%c", &moji);
	if (moji >= 0x41 && moji <= 0x5A) {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji + 0x20);
	}else {
		if (moji >= 0x61 && moji <= 0x7A) {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c", moji - 0x20);
		}else {
			printf("%c", moji);
		}
	}
}