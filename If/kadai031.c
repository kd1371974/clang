#include<stdio.h>
main()
{
	int a,b;
	printf("2�̎����l�H");
	scanf("%d %d", &a, &b);
	if (a < b) {
		printf("�傫���ق��́�%d\n",b);
	}
	else {
		printf("�傫���ق��́�%d\n",a);
	}
}