#include <stdio.h>

void myStartFunc(void) __attribute__ ((constructor));
/**
 * myStartFunc- Prints a string before main function is executed
 *
 */
void myStartFunc(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
