#include<stdio.h>
main()
{
	int i,su;
	printf("��������:");
	scanf("%d", &su);

	for (i = 1; i <= 5; i++) {
		printf("%d  ", su*i);
	}
}