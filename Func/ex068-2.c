#include<stdio.h>
main()
{
	int c;
	char dumy[256];
	char* p;

	p= gets(dumy); //“ü—Í

	while (p != NULL) //Ctrl+Z‚ÅI—¹
	{
		printf("%s\n", dumy);
		p=gets(dumy);  //“ü—Í
	}
}