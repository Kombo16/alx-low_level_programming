#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Function to print all numbers from input to 98
 * @n: The integer to be inputed
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
