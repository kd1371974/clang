#include<stdio.h>
main()
{
	int a,ans;
	printf("整数？");
	scanf("%d" ,&a);
	ans = a % 2;

	if (ans==1) {//0でも可
		printf("奇数です\n",a);
	}
	else {
		printf("偶数です\n",a);
	}
}