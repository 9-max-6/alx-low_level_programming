#include "main.h"

/**
 * malloc_checked - function to allocate memory using
 * malloc
 * @b: the size of the memory
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *mallcd;

	if (b <= 0)
	{
		return (NULL);
	}
	mallcd = malloc(b);
	if (!mallcd)
	{
		return (NULL);
	}
	else
	{
		return (mallcd);
	}
}

