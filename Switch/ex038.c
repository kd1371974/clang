#include<stdio.h>
main()
{
	int su;
	printf("整数を入力：");
	scanf("%d", &su);
	switch (su/10) {
		case 1:
			printf("10点台です");
			break;

		case 2:
			printf("２０点台です");
			break;

		case 3:
			printf("３０点台です");
			break;

		case 4:
			printf("４０点台です");
			break;

		default:
			printf("エラー表示");
	}
}