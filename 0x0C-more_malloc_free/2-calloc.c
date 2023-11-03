#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
     	void *mem;

     	if (nmemb == 0 || size == 0)
     	{
	 	return (NULL);
     	}

     	mem = malloc(nmemb * size);
     	if (mem == NULL)
     	{
	 	return (NULL);
     	}

     	memset(mem, 0, nmemb * size);

     	return (mem);
}
