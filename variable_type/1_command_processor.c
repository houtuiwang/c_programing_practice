#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;

	printf("\n\nIs command processor available?\n");
	if (system(NULL)) {
		printf("Command is available\n");
	} else {
		printf("Command is not available\n");
		exit(1);
	}
	printf("Executing command dir\n");
	x=system("dir");
	printf("Return value = %d\n", x);

	return 0;
}
