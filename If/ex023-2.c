//ex023-2.c
// ���邤�N�̔���
#include<stdio.h>
main()
{
	int su;
	printf("�������́F");
	scanf("%d", &su);

	if (su%4==0&&su%100!=0) {
		printf("���邤�N�ł�\n");
	}

	if (su%400==0) {
		printf("���邤�N�ł�\n");
	}
	else {
		printf("���N�ł�\n");
	}
}