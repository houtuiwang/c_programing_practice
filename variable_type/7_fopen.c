#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *FilePtr;

	FilePtr = fopen("mytest.txt", "r");

	if (FilePtr == NULL) {
		fputs("File does not exist \n", stderr);
		abort();
	}

	fclose(FilePtr);
	return 0;
}
