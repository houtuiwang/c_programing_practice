#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	FILE *fptr1, *fptr2;
	char fname[25] = "test.txt", fname1[25] = "tmp.txt";

	fptr1 = fopen(fname, "r");
	if (fptr1 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}
	fptr2 = fopen(fname1, "w");
	if (fptr2 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	while ((ch = getc(fptr1)) != EOF) {
		ch += 100;
		putc(ch, fptr2);
	}

	fseek(fptr2, 0, SEEK_SET);
	while ((ch = getc(fptr2)) != EOF) {
		putc(ch, stdout);
	}

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
