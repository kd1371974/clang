//ex024b.c
// �����o�[�W����
#include<stdio.h>
main()
{
	char moji;
	printf("��������́F");
	scanf("%c" ,&moji);

	if (moji >= 0x41&&moji<=0x4A) {
        {
			printf("�啶���ł�\n");
		}
	}
	else {
		printf("���̑��̕����ł�\n");
	}
    
	
}