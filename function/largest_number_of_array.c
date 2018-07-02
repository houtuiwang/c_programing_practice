#include <stdio.h>

int largest_number(int *arr);

int main(void)
{
	int arr1[25];
	int n;

	printf("Input the number of elements to be stored in the array:");
	scanf("%d", &n);
	printf("Input 5 elements in the array\n");
	for (int i = 0; i < n; ++i) {
		printf("element-%d:", i);
		scanf("%d", &arr1[i]);
	}
	printf("The largest element in the array is : %d\n", largest_number(arr1));
	return 0;
}

int largest_number(int *arr)
{
	int n = sizeof(arr);
	int max = arr[0];

	for (int i = 0; i < n; ++i) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	return max;
}
