#include "main.h"

/**
 *print_rev - Function to print string in reverse
 *@s: The string to be reversed
 *Return: 0 success
 *
 */

void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		ptr++;
	}

	ptr--;

	while (ptr >= s)
	{
		_putchar(*ptr);
		ptr--;
	}

	_putchar('\n');
}
