#include<stdio.h>
main()
{
	int ia=100, ib=7;
	printf("※※※100と7の四則演算※※※\n");
	printf("%d+%d=%d\n", ia, ib, ia + ib);
	printf("%d-%d=%d\n", ia, ib, ia - ib);
	printf("%d*%d=%d\n", ia, ib, ia * ib);
	printf("%d/%d=%dあまり%d", ia, ib, ia / ib, ia % ib);
}