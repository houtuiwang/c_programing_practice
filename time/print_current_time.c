#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	time_t cur_time;
	char *cur_t_string;
	cur_time = time(NULL);
	if (cur_time == ((time_t)-1)) {
		fprintf(stderr, "Failed to get the current time.");
		exit(EXIT_FAILURE);
	}
	cur_t_string = ctime(&cur_time);
	if (cur_t_string == NULL) {
		fprintf(stderr, "Failed to convert the current time.");
		exit(EXIT_FAILURE);
	}
	printf("\nThe current time is: %s\n", cur_t_string);
	return 0;
}
