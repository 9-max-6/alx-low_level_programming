#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - a function to print out the elements of
 * dog
 * @d: struct of type dog.
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner:(nil)");
	else
		printf("Owner: %s\n", d->owner);
}

