#include<stdio.h>
main()
{
	double a, b;
	printf("2つの実数値？");
	scanf("%lf %lf", &a, &b);
	printf("※※※%lfと%lfの四則計算※※※", a, b);
	printf("和＝%.6f\t", a + b);
	printf("差=%.6f\t", a - b);
	printf("積=%.6f\t", a * b);
	printf("商=%.6f\t", a / b);
}