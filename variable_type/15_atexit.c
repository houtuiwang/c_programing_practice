#include<stdio.h>
#include<stdlib.h>

void newFunctionOne (void)
{
	puts (" Here is the message returning from newFunctionOne.");
}
void newFunctionTwo (void)
{
	puts (" Here is the message returning from newFunctionTwo.");
}
int main ()
{
	atexit (newFunctionOne);
	atexit (newFunctionTwo);
	puts ("\n This is the message from main function.");
	return 0;
}
