#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[25][50], temp[25];
	int n,i,j;

	printf("Input number of strings :\n");
	scanf("%d", &n);

	printf("Input string %d\n", n);

	for (i=0; i<=n; i++) {
		fgets(name[i], sizeof name, stdin);
	}

	for (i=1; i<=n; i++) {
		for (j=0; j<=n-i; j++) {
			if (strcmp(name[j],name[j+1]) > 0) {
				strcpy(temp,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],temp);
			}
		}
	}

	printf("The strings appears after sorting :\n");
	for (i=0; i<=n; i++) {
		printf("%s\n",name[i]);
	}

	return 0;
}
