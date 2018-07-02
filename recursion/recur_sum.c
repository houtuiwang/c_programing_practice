#include <stdio.h>

int recur_sum(int n);

int main(void)
{
	int n;

	printf("Input the last number:");
	scanf("%d", &n);
	printf("The sum is: %d \n", recur_sum(n));

	return 0;
}

int recur_sum(int n)
{
	if (n == 1) {
		return 1;
	} else {
		return n+recur_sum(n-1);
	}
}
