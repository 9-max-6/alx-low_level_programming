#include "main.h"

/**
 * _strncpy - a function to copy a string
 * @dest: the destination to copy into.
 * @src: the source of the string to be copied
 * @n: the number of bytes to be copied from the source
 * Return: returns a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

