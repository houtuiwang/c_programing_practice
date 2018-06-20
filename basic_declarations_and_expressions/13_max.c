#include <stdio.h>

int compare(int first, int second)
{
	if (first >= second) {
		return first;
	} else {
		return second;
	}
}

int main(void)
{
	int first, second, third, max;

	printf("Input the first integer:\n");
	scanf("%d", &first);
	printf("Input the second integer:\n");
	scanf("%d", &second);
	printf("Input the third integer:\n");
	scanf("%d", &third);

	max = compare(first, second);
	max = compare(max, third);

	printf("Maximum value of three integers = %d\n", max);

	return 0;
}
