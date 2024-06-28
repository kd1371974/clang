#include<stdio.h>
main()
{
	int ia;
	printf("10進数の数値？");
	scanf("%d", &ia);
	printf("8進数＝%o\t 16進数＝%0x", ia,ia);
}