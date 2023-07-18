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
	int len1, len2;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);
	len1 = strlen(name);
	len2 = strlen(owner);
	newDog->name = malloc(sizeof(char) * (len1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
