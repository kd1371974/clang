#include<stdio.h>
main()
{
	char s[30];
	int k[30]; //�������L�[�p
	int i;

	printf("���������͂��Ă���������");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//�������L�[�̓���
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		//�������L�[���g���ĕ�����
		s[i] -= k[i];
	}
	printf("�������ς݂̕�����́A%s\n", s);
}