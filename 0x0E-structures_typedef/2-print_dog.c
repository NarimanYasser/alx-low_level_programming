#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print of a structure dog.
 * @d: pointer of a structure dog.
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d ==  NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
