#include<stdio.h>
//�֐��v���g�^�C�v�錾
int add(int a, int b);
main()
{
	int a, b, kotae;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("���v��%d�ł�\n", kotae);
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}