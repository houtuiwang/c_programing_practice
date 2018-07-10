#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[125], fname[25] = "test.txt";
	FILE *fptr;
	int i, n;

	fptr = fopen(fname, "a+");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("Input the number of lines to be written :");
	scanf("%d", &n);
	printf("The lines are: \n");
	for (i = 0; i < n+1; ++i) {
		fgets(str, sizeof(str), stdin);
		fputs(str, fptr);
	}

	fseek(fptr, 0, SEEK_SET);
	printf("The content in the file are :\n");
	while (fgets(str, sizeof(str), fptr)) {
		fputs(str, stdout);
	}

	fclose(fptr);
	return 0;
}
