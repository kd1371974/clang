//f[^Μ}ό
#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] ={{1,"kCΉ",NULL},
							{2,"ΒX§",NULL},
							{3,"βθ§",NULL},
							{4,"{ι§",NULL},
							{5,"Hc§",NULL},
							{6,"R`§",NULL},
							{7,"§",NULL},
							{DATA_END,"",NULL} };
	struct ken* p, * wp;

	struct ken hyogo = { 28,"ΊΙ§",NULL };//ΊΙ§Μf[^

	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);
	 
	//f[^Μ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}

	printf("----------\n");

	//kCΉΖΒX§ΜΤΙΊΙ§π}ό·ι
	ken_data[0].next = &hyogo;//kCΉΜnextΙΊΙΜAhXπZbg
		hyogo.next = &ken_data[1];//ΊΙΜnextΙΒXΜAhXπZbg

	//f[^}όγΜNΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}