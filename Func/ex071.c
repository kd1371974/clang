#include<stdio.h>
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, g;
	float h;
	printf("®”‚ğ‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);

	g = gokei(a, b, c);
	h = heikin(a, b, c);

	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", g, h);
}
int gokei(int a, int b, int c)
{
	return a + b + c;
}
float heikin(int a, int b, int c)
{
	return (float)(a + b + c)/ 3;
}