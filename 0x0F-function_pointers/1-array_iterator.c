#include "function_pointers.h"

/**
 * array_iterator - maps a func on each element of an array
 * @array: pointer to the array of integers.
 * @size: size of the array.
 * @action: function to be mapped.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
