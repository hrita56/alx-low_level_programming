#include <stdio.h>

void firs(void) __attribute__ ((constructor));

/**
 * first - sentence to be printed before the main function executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!");
}
