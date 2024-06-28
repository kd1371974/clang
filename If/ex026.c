#include<stdio.h>
main()
{
	int manth;
	printf("月を入力：");
	scanf("%d",&manth);

		if (manth == 2) {
			printf("最終日は28日です\n");
		}
		else {
			if (manth == 4 || manth == 6 || manth == 9 || manth == 11) {
				printf("最終日は30日です\n");
			}
			else {
				printf("最終日は31日です\n");
			}
		}
 
}