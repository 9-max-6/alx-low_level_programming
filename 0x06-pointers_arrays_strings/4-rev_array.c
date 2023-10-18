#include "main.h"

/**
 * reverse_array - a function to reverse the content of
 * an array.
 * @a: pointer to the array of integers
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int j, i, temp;

	j = n - 1;
	for (i = 0; j > i; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}

