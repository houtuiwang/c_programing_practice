#include <stdio.h>

int main(void)
{
	int hours, minutes, seconds;

	printf("Input seconds:\n");
	scanf("%d", &seconds);

	hours = seconds/3600;
	minutes = (seconds%3600)/60;
	seconds = seconds%3600%60;

	printf("H:M:S - %d:%d:%d\n", hours, minutes, seconds);

	return 0;
}
