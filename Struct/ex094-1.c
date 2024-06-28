#include<stdio.h>
#define NIN 5

struct day{
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[NIN] = {{"sakura",2006, 3, 18,"O"},
								{"hazuki",2008, 11,18,"O"},
								{"myouzi",2005, 2, 13,"A"},
								{"namae",2000,12,11,"B"},
								{"wakai",2011, 2, 4,"AB"}};
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; i++,p++) {
		if (p->date.tuki == 2) {
			printf("%s--%d”N%02dŒŽ%02d“ú¶@ŒŒ‰tŒ^-%sŒ^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}
	}
}