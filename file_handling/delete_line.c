#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int lno, ctr = 0;
	FILE *fptr1, *fptr2;
	char fname[25] = "test.txt", str[125], temp[25] = "temp.txt";

	printf("Delete a specific line from a file :\n");

	fptr1 = fopen(fname, "r");
	if (fptr1 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	fptr2 = fopen(temp, "w");
	if (fptr2 == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("Input the line you want to remove : ");
	scanf("%d", &lno);

	while (fgets(str, sizeof(str), fptr1)) {
		ctr++;
		if (ctr != lno) {
			fprintf(fptr2, "%s", str);
		}
	}

	fclose(fptr1);
	fclose(fptr2);
	remove(fname);
	rename(temp, fname);
	return 0;
}
