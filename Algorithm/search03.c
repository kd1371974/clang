#include<stdio.h>
main()
{
	int d[] = { 10,25,18,23,28,35,47,55,68,78,96 };
	int s, low, mid, high;

	printf("íTçıílÇÕÅH");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (s == d[mid]) break;
		if (s > d[mid])
		{
			low = mid + 1;
		}
		if (s < d[mid])
		{
			high = mid - 1;
		}
		/*if (s == d[mid]) break;
		if (s > d[mid]){low = mid + 1;}
		if (s < d[mid]){high = mid - 1;}*/
	}

	if (low > high)
	{
		printf("å©Ç¬Ç©ÇÁÇ»Ç©Ç¡ÇΩ\n");
	}
	else 
	{
		printf("d[%d]Ç…Ç†Ç¡ÇΩ", mid);
	}
}

