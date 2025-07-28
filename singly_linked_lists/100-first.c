#include <stdio.h>

/**
 * first - Prints a sentence before the main function is executed
 *
 * This function uses the constructor attribute to ensure it runs
 * before main when the program starts.
 */

void __attribute__((constructor)) first(void)
{
		printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}
