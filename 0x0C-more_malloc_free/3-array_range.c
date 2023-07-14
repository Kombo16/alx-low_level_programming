#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - Function that creates an array
 *@min: minimum number
 *@max: maximum number
 *Return: pointer to newly created array
 *
 */

int *array_range(int min, int max)
{
	int *new_array, i, num;

	if (min > max)
		return (NULL);
	num = max - min + 1;

	new_array = malloc(sizeof(int) * num);

	if (new_array == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		new_array[i] = min++;
	return (new_array);
}


