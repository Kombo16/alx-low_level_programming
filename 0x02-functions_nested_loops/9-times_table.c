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
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			_putchar(' ');

			re = i * j;
			if (re <= 9)
				_putchar('0' + re);
			else
			{
				_putchar('0' + re / 10);
				_putchar('0' + re % 10);
			}
		}
		_putchar('\n');
	}
}
