#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, target, work, data[20];
	srand(time(0));
	i = 0;
	while (i < 20) {
		data[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < 20) {
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		i++;
	}
}