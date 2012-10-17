#include <stdio.h>
#include <math.h>

int main() {
	printf("Number\t\tSquare root of number\n");
	int i;
	for (i=0; i<25; i++)
		printf("%d\t\t%.2f\n", i, sqrt((double) i));
	return 0;
}
