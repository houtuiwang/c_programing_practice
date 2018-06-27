#include <stdio.h>

int main(void)
{
	int test, i, sum=0;

	printf("Test data:\n");
	scanf("%d", &test);

	printf("\nThe first %d natural number are:\n", test);
	for (i = 0; i < test; ++i) {
		sum += (i + 1);
		printf("%d\n", i+1);
	}
	printf("\nThe sum of natural number upto %d terms : %d\n", test, sum);
	return 0;
}
