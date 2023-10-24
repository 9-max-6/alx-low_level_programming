#include "main.h"

/**
 * _memset - a function that fills the first n bytes
 * of the memory area pointedto by s with the constn
 * byte b.
 *
 * @s: the pointer to the memory pool.
 * @b: character to use.
 * @n: number of bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!s)
	{
		return (NULL);
	}

	while (s[i] != NULL && i < n)
	{
		s[i] = b;
	}

	return (s);
}

