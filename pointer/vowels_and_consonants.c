#include <stdio.h>

int main(void)
{
	char str1[100];
	char *pt;
	int ctrV, ctrC;

	printf("Input a string: ");
	fgets(str1, sizeof(str1), stdin);

	pt=str1;
	ctrV=ctrC=0;
	while (*pt != '\0') {
		if (*pt=='A' || *pt=='E' ||*pt=='I' || *pt=='O' || *pt=='U' ||*pt=='a' || *pt=='e' || *pt=='i' || *pt=='o' ||*pt=='u') {
			ctrV++;
		} else {
			ctrC++;
		}
		pt++;
	}

	printf("Number of vowels %d, Number of consonants %d\n", ctrV, ctrC-1);

	return 0;
}
