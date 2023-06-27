#include "main.h"

/**
 *_puts - Function to print string
 *@str: Character which is to be outputted
 *Return: 0
 *
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}

