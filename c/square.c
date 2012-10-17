#include <stdio.h>

main() {
	printf("Number\t\tSquare of number\n");
	int i;
	for (i=0; i<25; i++) 
		printf("\t%d\t\t%d\n", i, i*i);
}
