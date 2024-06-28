#include<stdio.h>
main()
{
	char data[] = "orange";
	int i;

	for (i = 0;data[i]!='\0';i++){}

	printf("•¶š—ñF%s\n", &data[0]);
	printf("•¶š”‚Í%d•¶š\n", i);
}