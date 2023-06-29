#include "main.h"

/**
 *reverse_array - Function to reverse the content of an array of integers
 *@a: array
 *@n: number of elemwnts to be swapped
 *Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
