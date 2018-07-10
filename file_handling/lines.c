#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[125];
	FILE *fptr;
	int lines = 0;
	char fname[25] = "test.txt";

	fptr = fopen(fname, "r");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	while (fgets(str, sizeof(str), fptr)) {
		lines++;
	}

	printf("The lines in the file is %d.\n", lines);

	fclose(fptr);
	return 0;
}
