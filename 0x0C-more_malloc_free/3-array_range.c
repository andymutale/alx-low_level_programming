#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the minimum value in the array
 * @max: the maximum value in the array
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
