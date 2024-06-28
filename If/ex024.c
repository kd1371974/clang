#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c" ,&moji);
	
	if (moji >= 0x41) {
		if (moji <= 0x5A) {
			printf("‘å•¶Žš‚Å‚·\n");
		}

		else
		{
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
    
	
}