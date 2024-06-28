#include<stdio.h>
main()
{
	int i=0,su=0, gokei=0;
	do {
		su += gokei;
		i++;
		printf("数は？");
		scanf("%d", &gokei);
	} while (gokei != -999);
	printf("合計=%d  平均=%.2f\n", su, (float)su / (i - 1));
	/*
	printf("数は？");
	scanf("%d",&gokei);
	
	for (i = 0, su = 0; gokei != -999; i++) {
		su += gokei;
		printf("数は？");
		scanf("%d", &gokei);
	}
	printf("合計=%d  平均=%.2f\n", su, (float)su / i);
	*/
}