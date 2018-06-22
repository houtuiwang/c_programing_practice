#include <stdio.h>

int main(void)
{
	int c, f;

	printf("Input a temperature (in certigrade):\n");
	scanf("%d", &c);
	f = c + 68;
	printf("f = %d\n", f);
	return 0;
}
