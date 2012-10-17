#include <stdio.h>

void main() {
	int i;
	int s = 0;
	for (i=0; i<10; i++)
		printf("%d\t%d\n", i, s += i);
	exit(0);
}
