#include <stddef.h>

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: Index of the first element that matches the comparison function, or -1 if no match is found.
 */
int int_index(int *array, int size, int (*cmp)(int)) {
    	int i;

    	if (array && cmp && size > 0) {
		for (i = 0; i < size; i++) {
	    		if (cmp(array[i])) {
				return (i);
	    		}
		}
    	}
    return (-1);
}
