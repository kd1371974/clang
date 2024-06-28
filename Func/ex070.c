#include<stdio.h>
//関数プロトタイプ宣言
int add(int a, int b);
main()
{
	int a, b, kotae;
	printf("整数を２つ入力:");
	scanf("%d%d", &a, &b);
	kotae = add(a, b);
	printf("合計は%dです\n", kotae);
}
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return ans;
}