#include <stdio.h>

struct EmpAddress {
	char *ename;
	char stname[20];
	int pincode;
};

struct EmpAddress employee={"John Alter", "Court Street \n", 654134}, *pt=&employee;

int main(void)
{
	printf("\n\n Pointer: show the usage of pointer to structure;\n");
	printf("---------------------------------------------------\n");
	printf("%s from %s \n\n", pt->ename, (*pt).stname);

	return 0;
}
