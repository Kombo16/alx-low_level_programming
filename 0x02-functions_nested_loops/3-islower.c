#include "main.h"

/**
 *_islower - Function to check for lowercase characters
 *@c: The integer to print
 *Return: 1 if lowercase 0 if uppercase or other
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
