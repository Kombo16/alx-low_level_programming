#include "main.h"

/**
 *puts2 - Function to print every other character of a string
 *@str: The input
 *Return: 0 success
 *
 */

void puts2(char *str)
{
	if (str == NULL);
	{
		return;
	}

	int index = 0;

	while (*str != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(*str);
			str++;
			index++;
		}
	}
	_putchar('\n');
}
