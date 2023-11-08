#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using the given printing function.
 * @name: The name to be printed.
 * @f: A function pointer that specifies how to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    	if (name != NULL && f != NULL)
		f(name);
}

