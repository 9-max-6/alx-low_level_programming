#include "main.h"

/**
 * array_range - a function to create an array of integers
 * @min: lower bound
 * @max: the upper bound
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int n, j, *arr;

	n = max - min;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (++n));
	if (!arr)
	{
		return (NULL);
	}
	for (j = 0; min <= max; j++)
	{
		arr[j] = min;
		min++;
	}

	return (arr);
}
