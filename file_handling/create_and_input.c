#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[1024];
	FILE *fptr;
	char fname[20] = "test.txt";

	fptr = fopen(fname, "w");
	if (fptr == NULL) {
			printf("Error in opening file!");
			exit(1);
	}

	printf("Input a sentence in the text:");
	fgets(str, sizeof str, stdin);
	fprintf(fptr, "%s", str);
	fclose(fptr);

	return 0;
}
