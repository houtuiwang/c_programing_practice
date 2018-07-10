#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[1024];
	FILE *fptr;
	char fname[25] = "test.txt";

	fptr = fopen(fname, "r");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("The content of the file test.txt is :\n");
	while (fgets(str, sizeof str, fptr) != NULL) {
		fputs(str, stdout);
	}

	fclose(fptr);
	return 0;
}
