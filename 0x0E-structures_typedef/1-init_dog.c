#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialze of a dog.
 * @d: pointer of data type initialize.
 * @name: the name of a dog.
 * @age: the age of a dog.
 * @owner: the owner of a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
