#include<stdio.h>
main()
{
	char s[30];
	int k[30]; //複合化キー用
	int i;

	printf("文字列を入力してください＞");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++)
	{
		//複合化キーの入力
		printf("s[%d]の複合化キー＞", i);
		scanf("%d", &k[i]);
		//複合化キーを使って複合化
		s[i] -= k[i];
	}
	printf("複合化済みの文字列は、%s\n", s);
}