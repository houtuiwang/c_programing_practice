#include <stdio.h>

int sum(int a, int b); //function declaration

int main(void)
{
	int total;
	printf("The sum results of two integer :\n");
	total = sum(5, 6);  //function call;

	printf("%d \n", total);
	return 0;
}

int sum(int a, int b)
{
	//function definition
	return (a+b); //function return
}
