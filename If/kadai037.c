#include<stdio.h>
main()
{
	int su;
	printf("0����100�܂ł̐����H");
	scanf("%d", &su);
	if (90 <= su && 100 >= su) {
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}else {
		if (90 > su && 80 <= su) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
		}else {
			if (80 > su && 50 <= su) {
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
			}else {
				if (50 > su && 30 <= su) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
				}else {
					printf("��L�ȊO");
				}
			}
		}
	}
}