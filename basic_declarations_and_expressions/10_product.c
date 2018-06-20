#include <stdio.h>

int main(void)
{
	int first, second;

	printf("Input the first integer:\n");
	scanf("%d", &first);
	printf("Input the second integer:\n");
	scanf("%d", &second);

	printf("Product of the above two integer = %d\n", first * second);

	return 0;
}
