#include "main.h"

/**
 * _strncat - a function to only copy n bytes from
 * a source string
 * @dest: destination string
 * @src: the source string
 *
 * Return: returns a pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int ind, j;

	ind = 0;
	while (dest[ind] != '\0')
	{
		ind++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[ind] = src[j];
		ind++;
	}
	dest[ind] = '\0';

	return (dest);
}

