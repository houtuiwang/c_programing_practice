#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[125];
	FILE *fptr1, *fptr2;
	char fname[25] = "test.txt", fname1[25] = "test1.txt";

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

	while (fgets(str, sizeof(str), fptr1)) {
		fputs(str, fptr2);
	}

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
