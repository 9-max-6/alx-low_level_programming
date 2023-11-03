#include "main.h"

/**
 * _realloc - a function to reallocate mem
 * @ptr: pointer to the memory block.
 * @old_size: the older size.
 * @new_size: the new size
 *
 * Return: pointer to new block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int  new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (!ptr)
	{
		return (new_ptr);
	}
	if (!new_ptr)
	{
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
		return (ptr);
	}
	for (i = 0; i < new_size && ptr[i] != '\0'; i++)
	{
		new_ptr[i] = ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
