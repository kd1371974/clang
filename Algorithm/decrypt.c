//複合化
#include<stdio.h>
main()
{
	char s[30];
	int i;

	printf("暗号化文字列を入力して下さい＞");
	scanf("%s", s);
	 
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}
	printf("複合済み列は、%s\n", s);
}