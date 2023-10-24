#include "main.h"

/**
 * _memset - Fills a memory area with a specified byte.
 * @s: The memory area to be filled.
 * @b: The character to copy into the memory area.
 * @n: The number of times to copy 'b'.
 *
 * Return: A pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
