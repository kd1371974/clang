#include<stdio.h>
void go(int x, int y, int* gokei, float* heikin);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ‚Q‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	go(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚ÍA%.2f\n",c,d);
}
void go(int x, int y, int* gokei, float* heikin)
{
	*gokei = x + y;
	*heikin = (float)*gokei / 2;
}