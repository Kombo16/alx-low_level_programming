#include "main.h"

/**
 *_puts - Function to print string followed by a new line
 *@s: Pointer to a character
 *Return: 0 Success
 *
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
