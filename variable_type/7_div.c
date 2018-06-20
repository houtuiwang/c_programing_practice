#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, d;
	div_t result;

	printf("Input numerator:\n");
	scanf("%d", &n);
	printf("Input div:\n");
	scanf("%d", &d);

	result = div(n, d);
	printf("quotient = %d, remainder = %d\n", result.quot, result.rem);
	return 0;
}
