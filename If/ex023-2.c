//ex023-2.c
// うるう年の判定
#include<stdio.h>
main()
{
	int su;
	printf("西暦を入力：");
	scanf("%d", &su);

	if (su%4==0&&su%100!=0) {
		printf("うるう年です\n");
	}

	if (su%400==0) {
		printf("うるう年です\n");
	}
	else {
		printf("平年です\n");
	}
}