#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory to be reallocated
 * @old_size: size of the memory to be reallocated
 * @new_size: new size of the memory
 *
 * Return: pointer to the newly reallocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	unsigned int min_size = old_size < new_size ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);
	free(ptr);

	return (new_ptr);
}

