#include<stdio.h>
int G_Max(int* x, int y);
int G_Min(int* x, int y);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };

	printf("Å‘å’l=%d\n", G_Max(data, 8));
	printf("Å¬’l=%d\n", G_Min(data, 8));
}
int G_Max(int* x, int y)
{
	int max, i;
	for (max = *x, i = 1; i < y; i++) {
		if (max < *(x + i)) {
			max = *(x + i);
		}
	}
	return max;
}
int G_Min(int* x, int y)
{
	int min, i;
	for (min = *x, i = 1; i < y; i++) {
		if (min > *(x + i)) {
			min = *(x + i);
		}
	}
	return min;
}