#include "main.h"

/**
 * times_table - Function to print a 9-times table
 * Return: Always 0
 */

void times_table(void)
{
	int i, j, re;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			re = i * j;
			if (re <= 9)
				_putchar(' ');
			else
			{
				_putchar('0' + re / 10);
				_putchar('0' + re % 10);
			}
		}
		_putchar('\n');
	}
}
