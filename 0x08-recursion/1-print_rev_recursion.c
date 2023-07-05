#include "main.h"

/**
 *_print_rev_recursion - Function that reverses a string
 *@s: Pointer to  a character
 *Return: 0 Success
 *
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
