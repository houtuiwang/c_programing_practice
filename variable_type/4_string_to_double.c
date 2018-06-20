#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input[] = "8.0 2.0";
	char *ptr_end;
	double x, y;

	x = strtod(input, &ptr_end);
	y = strtod(ptr_end, NULL);

	printf("Output = %.2lf\n", x/y);
	return 0;
}
