#include <stdio.h>
#include "dog.h"

/**
 *init_dog - Function that initializes a variable of struct dog
 *@d: Pointer to struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: pointer
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
