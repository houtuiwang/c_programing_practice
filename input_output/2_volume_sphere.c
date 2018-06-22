#include <stdio.h>

int main(void)
{
	double volume, radius;

	printf("Input the radius of the sphere:\n");
	scanf("%lf", &radius);
	volume = 4.0 / 3.0 * 3.14 * radius * radius * radius;
	printf("The volume is %lf\n", volume);
	return 0;
}
