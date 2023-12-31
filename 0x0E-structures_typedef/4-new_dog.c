#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 *new_dog - Function that creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return:pointer to struct new_dog NULL if function fail
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	len1 = strlen(name);
	len2 = strlen(owner);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
