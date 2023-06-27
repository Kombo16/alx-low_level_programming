#include "main.h"

/**
 *puts_half - Function to print half of a string
 *@str: The string to be input
 *Rwturn: Half of string
 */

void puts_half(char *str)
{
	int a, n, len;

	len = 0;
	for (a = 0; str[a] != '\0'; a++)
		len++;

	n = (len / 2);
	if ((len % 2) == 1)
		n = ((len - 1) / 2);
	for (a = n; str[a]; a++)
		_putchar(str[a]);
	_putchar('\n');
}
