#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, N;

	int find_max(int b[10], int k);
	void exchang(int b[10], int k);

	printf("Input no. of values in the array: \n");
	scanf("%d", &N);
	printf("Input the elements:\n");
	for (i = 0; i < N; ++i) {
		scanf("%d", &arr[i]);
	}
	exchang(arr, N);
	printf("Sorted array: \n");
	for (i = 0; i < N; ++i) {
		printf("%d\n", arr[i]);
	}
	return 0;
}

int find_max(int b[10], int k)
{
	int max=0, j;

	for (j = 1; j <= k; j++) {
		if (b[j] > b[max]) {
			max = j;
		}
	}
	return max;
}

void exchang(int b[10], int k)
{
	int temp, big, j;
	for (j = k-1; j >= 1; j--) {
		big = find_max(b, j);
		temp = b[big];
		b[big] = b[j];
		b[j] = temp;
	}
	return;
}
