#include<stdio.h>
void get_maxmin(int d1, int d2, int d3, int* max, int* min);
main()
{
	int d1, d2, d3, max, min;

	printf("整数を３つ入力:");
	scanf("%d%d%d", &d1, &d2, &d3);

	get_maxmin(d1, d2, d3, &max, &min);

	printf("最大値=%d 最小値=%d\n", max, min);
}
void get_maxmin(int d1, int d2, int d3, int* max, int* min)
{
	*max=(d1>d2)?(d1>d3)
}