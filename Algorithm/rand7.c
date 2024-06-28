#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans, num, cnt = 0;
	srand(time(0));
	rand();
	ans = rand() % 1000 + 1;
	printf("‚P`‚P‚O‚O‚O‚Ì’†‚Å“–‚½‚è”‚ğ—\‘z‚µ‚Ä‚­‚¾‚³‚¢\n");
	do {
		printf("“–‚½‚è‚Ì”‚ÍH[");
			scanf("%d", &num);
		if (ans > num) {
			printf("“–‚½‚è‚Ì”‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		if (ans < num) {
			printf("“–‚½‚è‚Ì”‚æ‚è‘å‚«‚¢‚Å‚·\n");
		}
		cnt++;
	} while (ans != num);
	printf("³‰ğI%d‰ñ–Ú‚Å“–‚½‚è‚Ü‚µ‚½\n", cnt);
}