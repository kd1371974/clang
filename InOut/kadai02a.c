#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎����l�H");
	scanf("%lf %lf", &a, &b);
	printf("������%lf��%lf�̎l���v�Z������", a, b);
	printf("�a��%.6f\t", a + b);
	printf("��=%.6f\t", a - b);
	printf("��=%.6f\t", a * b);
	printf("��=%.6f\t", a / b);
}