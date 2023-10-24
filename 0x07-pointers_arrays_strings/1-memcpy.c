#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: The destination memory area.
 * @src: The memory area to copy from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
