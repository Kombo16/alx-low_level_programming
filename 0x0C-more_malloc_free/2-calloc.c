#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc -Function that allocates memory for an array
 *@nmember: elements of array
 *@size: size of bytes
 *Return: pointer to allocated memory
 *
 *
 */

void *_calloc(unsigned int nmember, unsigned int size)
{
	if (nmember == 0 || size == 0)
		return (NULL);
	int *alloc = (int *)malloc(nmember * size);

	if (alloc == NULL)
		return (NULL);

	memset(alloc, 0, nmemb * size);
	return (alloc);
}
