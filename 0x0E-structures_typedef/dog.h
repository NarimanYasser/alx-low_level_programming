#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this the struct dog.
 * @name: The name of a dog.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 *
 * Descripction: Define a new type of the struct dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
