#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[30];
	int k[30];//�Í����L�[
	int i, n;

	//�����̃V���b�t��
	srand(time(0));

	printf("�Í������������͂��ĉ�������");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//���������߂�
		k[i] = rand() % 6;
		//���߂������ňÍ���
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n", s);
	printf("�Í����L�[�́A");

	for (n = 0; n < i; n++);
	{
		printf("%d", k[n]);
	}
}