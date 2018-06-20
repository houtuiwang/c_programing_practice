#include <stdio.h>
#include <stdlib.h>

int compare_integers(const void *x, const void *y)
{
	return (*(int*)x - *(int*)y);
}

int main(void)
{
	int *arrItem;
	int findValue;
	int my_array[100];
	int n, i;

	printf("Input the number of elements in the array:\n");
	scanf("%d", &n);

	printf("Input %d elements in the array:\n", n);

	for (i = 0; i < n; ++i) {
		printf("element - %d:\n", i+1);
		scanf("%d", &my_array[i]);
	}
	printf("Input a value to search:\n");
	scanf("%d", &findValue);
	arrItem = bsearch(&findValue, my_array, n, sizeof(int), compare_integers);
	if (arrItem != NULL) {
		printf("%d is found in the array.\n", *arrItem);
	} else {
		printf("%d is not found in the array.\n", findValue);
	}
	return 0;
}
