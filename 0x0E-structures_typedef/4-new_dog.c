#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *new_dog - Function that creates a new_dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: new dog NULL if function fail
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	newDog->name = malloc(sizeof(char) * (strlen(name) + 1));
	newDog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		free(newDog->owner);
		return (NULL);
	}
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
