#include "main.h"

/**
 *print_square - Function that prints a square
 *@size: The size of the square
 *Return: Always 0
 *
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				if (j == i)
					_putchar('#');
			}
		}
	}
}
