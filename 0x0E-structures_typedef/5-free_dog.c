#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - a function to free a structure of type dog.
 * @d: the structure to be freed.
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);

	d->owner = NULL;
	d->name = NULL;
	free(d);
	d = NULL;
}
