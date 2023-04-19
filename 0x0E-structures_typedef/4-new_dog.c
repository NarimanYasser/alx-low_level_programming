#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - creates the new dog
 * @name: The name of a dog.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 *
 * Return: pointer to new dog struct.
 * NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i;

	p_dog = malloc(sizeof(dog_t));
	if (p_dog == NULL)
		return (NULL);
	p_dog->name = malloc(sizeof(name) + 1);
	if (p_dog->name == NULL)
	{
		free(p_dog);
		return (NULL);
	}
	p_dog->owner = malloc(sizeof(owner) + 1);
	if (p_dog->owner == NULL)
	{
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';
	p_dog->age = age;
	for (i = 0; owner[i]; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';
	return (p_dog);
}
