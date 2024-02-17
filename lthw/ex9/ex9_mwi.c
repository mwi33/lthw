#include <stdio.h>

int main(int argc, char *argv[]){

	int i = 0;

	while (i < 25) {
		printf("%d", i);
		i++;
	}

	// need this to add  a final newline
	printf("\n");

	return 0;

	// this code runs as long as the condition is true i.e. i is less than 25

}


