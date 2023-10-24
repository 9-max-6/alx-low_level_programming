#include "main.h"

/**
 * _memcpy - a function to copy n bytes from memory area
 * src to memroy area dest.
 *
 * @dest: the destination.
 * @src: the source.
 * @n: number of bytes.
 *
 * Return: returns a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!src || dest == NULL)
	{
		return (NULL);
	}

	while(src[i] != '\0' && i < n)
	{
		if (dest[i] == NULL)
		{
			return (dest);
		}
		else
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}

