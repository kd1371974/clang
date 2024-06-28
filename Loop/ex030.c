#include<stdio.h>
main()
{
	int su, i;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &su);

	i = 0;
	while (i <= 10) {
		printf("%d+%d=%d\n", su, i, su + i);
		i++;
	}
}