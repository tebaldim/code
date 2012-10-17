#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 255

int main() {
	long int i;
	char buf[BUF_SIZE];
	char *p;

	printf("Enter a number:\n");
	
	if (fgets(buf, (int) sizeof(buf), stdin) != NULL) {
		i = strtol(buf, &p, 10);
		if (buf[0] != '\n' && (*p == '\n' || *p == '\0')) {
			printf("Value entered: %ld\n", i);
		} else {
			printf("Invalid value entered\n");
		}
	}
	
	exit(0);	
}
