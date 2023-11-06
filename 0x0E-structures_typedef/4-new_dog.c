#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function to make a new struct of type
 * dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: returns a pointer to new ly created strcuture.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t ptr;
	dog_t *new_dog;
	char *nae;
	char *ownr;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		;
	nae = malloc(i + 1);
	if (!nae)
		return (NULL);

	for (j = 0; owner[j] != '\0'; j++)
		;
	ownr = malloc(j + 1);
	if (!ownr)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		nae[i] = name[i];
	nae[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
		ownr[j] = owner[j];
	ownr[j] = '\0';

	ownr = owner;
	new_dog = &ptr;
	new_dog->name = nae;
	new_dog->age = age;
	new_dog->owner = ownr;

	return (new_dog);
}
