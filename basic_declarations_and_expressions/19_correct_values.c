#include <stdio.h>

int main(void)
{
	int p, q, r, s;

	printf("Input the first integer: \n");
	scanf("%d", &p);
	printf("Input the second integer: \n");
	scanf("%d", &q);
	printf("Input the third integer: \n");
	scanf("%d", &r);
	printf("Input the fourth integer: \n");
	scanf("%d", &s);

	if ((q>r) && (s>p) && ((r+s) > (p+q)) && (r>0) && (s>0) && (p%2 == 0)) {
		printf("Correct values\n");
	} else {
		printf("Wrong values\n");
	}
	return 0;
}
