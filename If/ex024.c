#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c" ,&moji);
	
	if (moji >= 0x41) {
		if (moji <= 0x5A) {
			printf("�啶���ł�\n");
		}

		else
		{
			printf("���̑��̕����ł�\n");
		}
	}
	else {
		printf("���̑��̕����ł�\n");
	}
    
	
}