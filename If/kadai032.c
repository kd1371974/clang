#include<stdio.h>
main()
{
	int a,ans;
	printf("�����H");
	scanf("%d" ,&a);
	ans = a % 2;

	if (ans==1) {//0�ł���
		printf("��ł�\n",a);
	}
	else {
		printf("�����ł�\n",a);
	}
}