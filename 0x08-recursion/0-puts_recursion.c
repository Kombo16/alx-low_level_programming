#include "main.h"

/**
 *_puts_recursion - Function that prints a string followed by a new line
 *@s: Pointer to  a character
 *Return: 0 Success
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return ('\n');
	_putchar(*s);
	return (_puts_recursion(s + 1));
}
