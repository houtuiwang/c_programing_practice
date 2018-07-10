#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[1024];
	FILE *fptr;
	char fname[25] = "test.txt";
	int n, i;

	printf("Input the number of lines to be written: ");
	scanf("%d", &n);

	fptr = fopen(fname, "w+");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("::The lines are:: \n");
	for (i = 0; i < n+1; ++i) {
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
	}

	fseek(fptr, 0, SEEK_SET);
	printf("The content in the file is: \n");
	char str1 = fgetc(fptr);
	while (str1 != EOF) {
		printf("%c", str1);
		str1 = fgetc(fptr);
	}
	printf("\n\n");
	/* while (fgets(str, sizeof str, fptr) != NULL) { */
	/* 	fputs(str, stdout); */
	/* } */

	fclose(fptr);
	return 0;
}
