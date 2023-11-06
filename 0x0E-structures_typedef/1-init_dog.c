#include "dog.h"

/**
 * init_dog - a function to initialize a struct of type
 * dog.
 * @d: pointer to the structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !age || !owner)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

