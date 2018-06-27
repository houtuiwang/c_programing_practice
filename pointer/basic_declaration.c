#include <stdio.h>

int main(void)
{
	int m=10,n,o;
	int *z=&m;

	printf("z stores the address of m = %p\n", z);
	printf("*z stores the value of m = %i\n", *z);
	printf("&m is the address of m = %p\n", &m);
	printf("&n is the address of n = %p\n", &n);
	printf("&o is the address of o = %p\n", &o);
	printf("&z is the address of z = %p\n", &z);

	return 0;
}
