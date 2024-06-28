//データの挿入
#include<stdio.h>
#define DATA_END -1

struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] ={{1,"北海道",NULL},
							{2,"青森県",NULL},
							{3,"岩手県",NULL},
							{4,"宮城県",NULL},
							{5,"秋田県",NULL},
							{6,"山形県",NULL},
							{7,"福島県",NULL},
							{DATA_END,"",NULL} };
	struct ken* p, * wp;

	struct ken hyogo = { 28,"兵庫県",NULL };//兵庫県のデータ
	struct ken osaka = { 27,"大阪府",NULL };

	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;
	} while (p->code != DATA_END);
	 
	//データの表示
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}

	printf("----------\n");

	//北海道と青森県の間に兵庫県を挿入する
	ken_data[0].next = &hyogo;//北海道のnextに兵庫のアドレスをセット
		hyogo.next = &ken_data[1];//兵庫のnextに青森のアドレスをセット

		//福島県の後ろに２７，大阪府を挿入
		ken_data[6].next = &osaka;//福島のnextに大阪のアドレスをセット
		osaka.next = &ken_data[7];//大阪のnextにデータ終端のアドレスをセット

	//データ挿入後のリンクの表示
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}