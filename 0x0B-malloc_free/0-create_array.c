#include "main.h"

/**
 * create_array - a function to create an array of chars
 * and then initialize it with a specific char.
 *
 * @size: size of the array.
 * @c: the character to use for initialiation.
 *
 * Return: returns a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';

	return (arr);
}
