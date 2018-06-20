#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *PathPtr;

	PathPtr = getenv("PATH");

	if (PathPtr != NULL) {
		printf("The set path is : %s\n", PathPtr);
	}
	return 0;
}
