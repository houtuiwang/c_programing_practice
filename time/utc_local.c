#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	time_t t = time(NULL);

	printf("\n The calender time expressed as coordinated univeral time is:\n");
	printf("\nUTC: %s\n", asctime(gmtime(&t)));
	printf("local: %s\n", asctime(localtime(&t)));

	#ifdef __STD_LIB_EXT1__
		struct tm buf;
		char str[26];
		asctime_s(str, sizeof str, gmtime_s(&t, &buf));
		printf("UTC: %s", str);
		asctime_s(str, sizeof str, gmtime_s(&t, &buf));
		printf("Local: %s", str);
	#endif
	return 0;
}
