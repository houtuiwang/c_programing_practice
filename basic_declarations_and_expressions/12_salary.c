#include <stdio.h>

int main(void)
{
	char id[10];
	int hours;
	double value, salary;

	printf("Input the Employees ID(Max.10 chars):\n");
	scanf("%s", id);
	printf("Input the working hrs:\n");
	scanf("%d", &hours);
	printf("Salary amount/hr:\n");
	scanf("%lf", &value);
	printf("Employees ID = %s\nSalary = U$ %.2lf\n", id, value * hours);
		
	return 0;
}
