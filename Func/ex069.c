#include<stdio.h>
main()
{
	int data, sum=0, cnt=0;
	int ret;

	//“ü—Í
	printf("®”:");
	ret = scanf("%d", &data);

	while (ret != EOF)
	{
		//ŒvZ
		sum += data;
		cnt++;

		printf("®”:");
		ret = scanf("%d", &data);
	}
	//‡Œv‚Æ•½‹Ï‚ğ‹‚ß‚é
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / cnt);
}