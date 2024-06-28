#include<stdio.h>
main()
{
	int i, num, sum;
	sum = 0;
	while (1)
	{
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}
		sum += num;
	}
	printf("‡Œv%d\n", sum);
}