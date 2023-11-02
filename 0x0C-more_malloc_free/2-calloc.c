#include "main.h"

/**
 * _calloc - a function to allocate mem for an arr of 
 * nmemb elements of size bytes
 *
 * @nmemb: number of member elements.
 * @size: size of the array
 *
 * Return: if success? pointer to new mem : NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *marr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	marr = malloc(size * nmemb);
	if (!marr)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		marr[i] = 0;
	}

	return (marr);
}
