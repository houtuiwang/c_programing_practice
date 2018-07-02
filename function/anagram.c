#include <stdio.h>
#include <string.h>

int is_anagram(char *arr1, char *arr2);

int main(void)
{
	char arr1[25],arr2[25];
	printf("Input the first string: ");
	scanf("%s", arr1);
	printf("Input the second string : ");
	scanf("%s", arr2);
	if (is_anagram(arr1, arr2)) {
		printf("%s and %s are anagram.\n", arr1, arr2);
	} else {
		printf("%s and %s are not anagram.\n", arr1, arr2);
	}

	return 0;
}

int is_anagram(char *arr1, char *arr2)
{
	int arr1ctr[256] = {0}, arr2ctr[256] = {0};
	int n1, n2, i;

	n1 = strlen(arr1);
	n2 = strlen(arr2);

	if (n1 != n2) {
		return 0;
	}

	for (i = 0; i < n1; ++i) {
		arr1ctr[arr1[i]]++;
	}

	for (i = 0; i < n2; ++i) {
		arr2ctr[arr2[i]]++;
	}

	for (i = 0; i < 256; ++i) {
		if (arr1ctr[i] != arr2ctr[i]) {
			return 0;
		}
	}

	return 1;
}
