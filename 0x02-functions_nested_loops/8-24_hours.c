#include "main.h"

/**
 *jack_bauer - Function to print a time pattern
 *Return: ..
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			if (i != 23 || j != 59)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}

