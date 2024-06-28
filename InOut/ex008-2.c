#include<stdio.h>
main()
{
	float b=5;
	//表示桁数の指定
	printf("b/3=%8.3f\n", b / 3.0);
	//ぜんたい8桁小数点以下3桁
	printf("b/3=%.3f\n", b / 3.0);
	//小数点以下3桁（全体桁を省略）
}