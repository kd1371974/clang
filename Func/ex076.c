#include<stdio.h>
void go(int x, int y, int* gokei, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	go(a, b, &c, &d);
	printf("合計は%d、平均は、%.2f\n",c,d);
}
void go(int x, int y, int* gokei, float* heikin)
{
	*gokei = x + y;
	*heikin = (float)*gokei / 2;
}