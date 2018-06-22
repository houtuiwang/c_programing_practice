#include <stdio.h>

int main(void)
{
	int num1, num2, num3, sum;
	char text[20];

	printf("Input three numbers sepatated by comma:\n");
	fgets(text, sizeof(text), stdin);
	sscanf(text, "%d, %d, %d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("The sum of three number is %d\n", sum);
	return 0;
}
