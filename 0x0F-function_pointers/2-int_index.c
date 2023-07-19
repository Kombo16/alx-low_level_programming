#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index- Function that searches for an integer
 *@array: array of type int
 *@size: size of array
 *@cmp: Function pointer to  a pointer that compares stirngs
 *Return:-1 if no element matches
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
