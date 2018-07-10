#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[10][128];
	FILE *fptr;
	char fname[25];
	int n, i;

	printf("Input the file name: ");
	scanf("%s", fname);
	/* fgets(fname, sizeof fname, stdin); */

	fptr = fopen(fname, "r");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	for (i=0; fgets(str[i], 128, fptr); i++) {
		;
	}

	n = i;
	printf("The content of the file are: \n");
	for (i = 0; i < n; ++i) {
		fputs(str[i], stdout);
	}

	fclose(fptr);
	return 0;
}
