#include<stdio.h>
main()
{
	int i=0,su=0, gokei=0;
	do {
		su += gokei;
		i++;
		printf("���́H");
		scanf("%d", &gokei);
	} while (gokei != -999);
	printf("���v=%d  ����=%.2f\n", su, (float)su / (i - 1));
	/*
	printf("���́H");
	scanf("%d",&gokei);
	
	for (i = 0, su = 0; gokei != -999; i++) {
		su += gokei;
		printf("���́H");
		scanf("%d", &gokei);
	}
	printf("���v=%d  ����=%.2f\n", su, (float)su / i);
	*/
}