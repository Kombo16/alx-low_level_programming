#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc -Function that allocates memory for an array
 *@nmemb: elements of array
 *@size: size of bytes
 *Return: pointer to allocated memory
 *
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = (int *)malloc(nmemb * size);

	if (alloc == NULL)
		return (NULL);

	memset(alloc, 0, nmemb * size);
	return (alloc);
}
