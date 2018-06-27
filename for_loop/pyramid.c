#include <stdio.h>

int main(void)
{
	int i, j, rows, k=1;
	printf("Input rows:\n");
	scanf("%d", &rows);
	for (i = 1; i <= rows; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d", k++);
		}
		printf("\n");
	}
	
	return 0;
}
