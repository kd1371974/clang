#include<stdio.h>
void go(int x, int y, int* gokei, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("�������Q����:");
	scanf("%d%d", &a, &b);
	go(a, b, &c, &d);
	printf("���v��%d�A���ς́A%.2f\n",c,d);
}
void go(int x, int y, int* gokei, float* heikin)
{
	*gokei = x + y;
	*heikin = (float)*gokei / 2;
}