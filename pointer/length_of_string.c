#include <stdio.h>

int main(void)
{
	int calculateLength(char *);
	char str1[25];
	int l;

	printf("Input a string: ");
	scanf("%s", str1);

	l = calculateLength(str1);
	printf("The length of string %s is %d\n", str1, l);
	return 0;
}

int calculateLength(char *ch)
{
	int ctr = 0;
	while (*ch != '\0') {
		ctr++;
		ch++;
	}
	return ctr;
}
