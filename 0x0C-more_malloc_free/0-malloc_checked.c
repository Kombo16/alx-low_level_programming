#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *malloc_checked - Function allocates memory using malloc
 *@b: no of bytes
 *Return: pointer to allocated memeory
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
