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
	unsigned int copy_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (!ptr)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	return (new_ptr);
}
