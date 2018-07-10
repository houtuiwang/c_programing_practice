#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch, fname[25] = "tmp.txt";
	FILE *fptr;

	fptr = fopen(fname, "r");
	if (fptr == NULL) {
		printf("Error in opening file!");
		exit(1);
	}

	printf("after decrypt tmp.txt: \n");

	while ((ch = getc(fptr)) != EOF) {
		ch -= 100;
		putc(ch, stdout);
	}

	fclose(fptr);
	return 0;
}
