#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int number, input;

	srand(time(NULL));

	number = random() % 10 + 1;

	do {
		printf("Guess the number (1 to 10):\n");
		scanf("%d", &input);
		if (number > input) {
			printf("The number is higher\n");
		}
	} while (number != input);
	printf("That is correct!\n");
	return 0;
}

