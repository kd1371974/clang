#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;

	//����
	printf("����:");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		//�v�Z
		sum += data;
		cnt++;

		printf("����:");
		ret = scanf("%d", &data);
	}
	//���v�ƕ��ς����߂�
	printf("���v=%d ����=%.2f\n", sum, (float)sum / cnt);
}