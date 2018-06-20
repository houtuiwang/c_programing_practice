#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char buf[] = "2016 40a0b0 -1101110100110111100110 0x5abfff";
	char *ptr_end;
	long i1, i2, i3, i4;

	i1 = strtol(buf, &ptr_end, 10);
	i2 = strtol(ptr_end, &ptr_end, 16);
	i3 = strtol(ptr_end, &ptr_end, 2);
	i4 = strtol(ptr_end, NULL, 0);

	printf("In decimals: %ld, %ld, %ld, %ld\n", i1, i2, i3, i4);
	
	return 0;
}
