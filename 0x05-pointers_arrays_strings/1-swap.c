#include "main.h"

/**
 *swap_int - Function to swap integers
 *@a:First integer to be swapped
 *@b:Second integer ro be swapped
 *Return: 0 success
 *
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
