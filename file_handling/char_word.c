#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char chr, fname[25] = "test.txt";
	FILE *fptr;
	int words = 0, chars = 0;

	fptr = fopen(fname, "r");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("The content of file are :\n");
	while ((chr=fgetc(fptr)) != EOF) {
		printf("%c", chr);
		if (chr == ' ' || chr == '\n') {
			words++;
		} else {
			chars++;
		}
	}

	printf("The number of words in the file text is %d\n", words);
	printf("The number of characters in the file is %d\n", chars);

	fclose(fptr);
	return 0;
}
