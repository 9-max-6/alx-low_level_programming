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
		exit(98);
	}
	mallcd = malloc(b);
	if (!mallcd)
	{
		exit(98);
	}
	else
	{
		return (mallcd);
	}
}

