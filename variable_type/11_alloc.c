#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n, num;
	int *my_array;

	printf("Input the number of array:\n");
	scanf("%d", &n);

	printf("Input the elements in the array:\n");
	my_array = malloc(n*sizeof(int));
	if (my_array == NULL) {
		printf("malloc failed\n");
	}

	for (i = 0; i < n; ++i) {
		printf("element %d: \n", i+1);
		scanf("%d", &my_array[i]);
	}

	printf("Values in the array are:\n");
	for (i = 0; i < n; ++i) {
		printf("my_array[i] = %d\n", my_array[i]);
	}

	free(my_array);
	return 0;
}
