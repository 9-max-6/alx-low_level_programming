#include "function_pointers.h"

/**
 * int_index - a function to search for an integer
 * @array: the array to be parsed.
 * @size: size of the array
 * @cmp: function to compare.
 *
 * Return: success ? index : -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || (!array))
		return (0);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}

	return (-1);
}
