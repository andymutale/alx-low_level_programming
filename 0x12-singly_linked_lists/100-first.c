#include <stdio.h>

/**
 * my_startup_function - prints a message
 * before the main function is executed
 */
void my_startup_function(void) __attribute__ ((constructor));

/**
 * my_startup_function - prints a message
 * before the main function is executed
 */
void my_startup_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}

