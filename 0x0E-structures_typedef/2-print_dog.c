#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog - Function that prints a struct dog
 *@d: Pointer to struct dog
 *
 *
 *
 */

void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog);
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name : %s\nAge : %f\nOwner : %s\n", d->name, d->age, d->owner);
}
