#include<stdio.h>
main()
{
	int d[10 + 1] = { 10,5,30,77,16,3,47,29,37,33 };
	int i, s;

	printf("探索値は？");
	scanf("%d", &s);

	//番兵を仕込む
	d[10] = s;

	for (i = 0; s != d[i]; i++)
	{}

	if (i >= 10)
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("d[%d]にあった\n", i);
	}
}