#ifndef __MAIN__
#define __MAIN__

#include <stdio.h>

/**
 * struct dog - a structure to pack properties of a dog
 * @name: name of the dog.
 * @owner: name of the dog.
 * @age: the age of the dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - type definition for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

