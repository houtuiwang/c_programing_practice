#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buf[15];
	unsigned long ul;

	printf("Input an unsigned number:\n");
	fgets(buf, 15, stdin);

	ul = strtoul(buf, NULL, 0);
	printf("ul = %lu\n", ul);

	return 0;
}
