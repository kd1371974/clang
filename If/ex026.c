#include<stdio.h>
main()
{
	int manth;
	printf("������́F");
	scanf("%d",&manth);

		if (manth == 2) {
			printf("�ŏI����28���ł�\n");
		}
		else {
			if (manth == 4 || manth == 6 || manth == 9 || manth == 11) {
				printf("�ŏI����30���ł�\n");
			}
			else {
				printf("�ŏI����31���ł�\n");
			}
		}
 
}