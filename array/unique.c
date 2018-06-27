#include <stdio.h>

int main(void)
{
	int arr1[100], n, ctr=0;
	int i, j, k;

	printf("Input the number of elements in an array:\n");
	scanf("%d", &n);

	printf("Input %d elements in the array:\n", n);
	for (i = 0; i < n; ++i) {
		printf("element-%d:", i);
		scanf("%d", &arr1[i]);
	}
	printf("The unique elements found in the array are:\n");

	for (i = 0; i < n; ++i) {
		ctr = 0;

		for (j = 0; j < i-1; ++j) {
			if (arr1[i] == arr1[j]) {
				ctr++;
			}
		}

		for (k = i+1; k<n; k++) {
			if (arr1[k]==arr1[i]) {
				ctr++;
			}
		}

		if (ctr == 0) {
			printf("%d", arr1[i]);
		}
	}

	printf("\n");
	return 0;
}
