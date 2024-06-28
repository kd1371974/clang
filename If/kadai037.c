#include<stdio.h>
main()
{
	int su;
	printf("0から100までの整数？");
	scanf("%d", &su);
	if (90 <= su && 100 >= su) {
		printf("その数値の判定結果は「５」です");
	}else {
		if (90 > su && 80 <= su) {
			printf("その数値の判定結果は「４」です");
		}else {
			if (80 > su && 50 <= su) {
				printf("その数値の判定結果は「３」です");
			}else {
				if (50 > su && 30 <= su) {
					printf("その数値の判定結果は「２」です");
				}else {
					printf("上記以外");
				}
			}
		}
	}
}