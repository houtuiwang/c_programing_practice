#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[125];
	FILE *fptr1, *fptr2, *fptr3;
	char fname1[25] = "test.txt", fname2[25] = "test1.txt", fname3[25] = "merge.txt";

	fptr1 = fopen(fname1, "r");
	if (fptr1 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	fptr2 = fopen(fname2, "r");
	if (fptr2 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}
	
	fptr3 = fopen(fname3, "w");
	if (fptr3 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	while (fgets(str, sizeof(str), fptr1)) {
		fputs(str, fptr3);
	}
	while (fgets(str, sizeof(str), fptr2)) {
		fputs(str, fptr3);
	}

	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);

	return 0;
}
