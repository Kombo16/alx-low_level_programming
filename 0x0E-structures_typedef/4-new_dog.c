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
	dog_t *newdog;
	int len1, len2;

	newdog = malloc(sizeof(dog_t));
	if (newdog)
		return (NULL);
	len1 = strlen(name);
	len2 = strlen(owner);
	newdog->name = malloc(sizeof(char) * (len1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
