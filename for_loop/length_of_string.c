#include <stdio.h>

int main(void)
{
	char str1[50];
	int i, l =0;
	printf("Input a string: ");
	scanf("%s", str1);

	for (i = 0; str1[i] != '\0'; i++) {
		l++;
	}
	printf("The length of the string %s is %d\n", str1, l);

	return 0;
}
