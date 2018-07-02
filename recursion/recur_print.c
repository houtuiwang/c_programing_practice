#include <stdio.h>

void recur_print(int n);

int main(void)
{
	recur_print(50);
	return 0;
}

void recur_print(int n)
{
	if (n == 1) {
		printf("%d ", 1);
		return;
	}
	recur_print(n-1);
	printf("%d ", n);
}
