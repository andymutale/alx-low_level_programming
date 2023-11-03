#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: the character written, or -1 on failure
 */
int _putchar(char c)
{
    	return write(1, &c, 1);
}

