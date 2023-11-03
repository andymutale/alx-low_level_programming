#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocate memory using malloc and check for success
 * @b: The size of the memory to allocate
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		printf("Memory allocation failed\n");
		exit(98);
	}

	return (p);
}

