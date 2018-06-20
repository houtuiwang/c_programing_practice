#include <stdio.h>

int main(void)
{
	int years, weeks, days;

	days = 1329;

	years = days / 365;
	weeks = days % 365 / 7;
	days = days % 365 % 7;

	printf("Years: %d\nWeeks: %d\nDays: %d\n", years, weeks, days);

	return 0;
}
