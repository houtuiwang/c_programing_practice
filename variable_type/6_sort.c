#include <stdio.h>
#include <stdlib.h>

int comparetor(const void *x, const void *y)
{
	return (*(int*)x - *(int*)y);
}

int main(void)
{
	int my_array[100];
	int n, i;

	printf("Input the number of elements to be stored in the array:\n");
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		printf("element - %d\n", i);
		scanf("%d", &my_array[i]);
	}
	qsort(my_array, n, sizeof(int), comparetor);
	printf("After sort the array is:\n");
	for (i = 0; i < n; ++i) {
		printf("my_array[i] = %d\n", my_array[i]);
	}
	return 0;
}
