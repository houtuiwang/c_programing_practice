#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int status = 0;
	char fname[25] = "test.txt";

	status = remove(fname);
	if (status == 0) {
		printf("test.txt file is deleted.\n");
	} else {
		printf("test.txt file deleting failed.\n");
	}

	return 0;
}
