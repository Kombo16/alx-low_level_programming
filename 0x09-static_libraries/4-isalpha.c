#include "main.h"

/**
 *_isalpha - Function that checks for alphabet
 *@c: integer
 *Return: 1 if alphabet else 0
 *
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	return (0);
}
