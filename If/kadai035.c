#include<stdio.h>
main()
{
	int su;
	printf("�����H");
	scanf("%d", &su);
	if (0 < su) {
		printf("���͒l�́u�v���X�v�ł�");
	}
	else {
		if (0 > su) {
			printf("���͒l�́u�}�C�i�X�v�ł�");
		}
		else {
			printf("���͒l�͂O�ł�");
		}
	}
}