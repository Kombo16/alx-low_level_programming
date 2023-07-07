#include "main.h"

/**
 *_islower - Function to check for lowercase letter
 *@c: input
 *Return: 1 if lowercase else 0
 *
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
