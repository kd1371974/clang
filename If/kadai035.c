#include<stdio.h>
main()
{
	int su;
	printf("整数？");
	scanf("%d", &su);
	if (0 < su) {
		printf("入力値は「プラス」です");
	}
	else {
		if (0 > su) {
			printf("入力値は「マイナス」です");
		}
		else {
			printf("入力値は０です");
		}
	}
}