#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializing a variable of type, struct dog
 * @d: The dog to be initialised.
 * @name: The name of the dog (member)
 * @age: The age of the dog (member)
 * @owner: the dog owner (member)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
