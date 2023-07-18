#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - Function that frees dogs
 *@d:Struct dog to free
 *
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
