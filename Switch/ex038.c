#include<stdio.h>
main()
{
	int su;
	printf("��������́F");
	scanf("%d", &su);
	switch (su/10) {
		case 1:
			printf("10�_��ł�");
			break;

		case 2:
			printf("�Q�O�_��ł�");
			break;

		case 3:
			printf("�R�O�_��ł�");
			break;

		case 4:
			printf("�S�O�_��ł�");
			break;

		default:
			printf("�G���[�\��");
	}
}