#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize variable of struct dog
 * @d: ptr
 * @name: doge's name
 * @age: just a number
 * @owner: doge's owner
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
