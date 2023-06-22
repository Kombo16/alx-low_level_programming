#include "main.h"

/**
 *_isupper - Function to check for uppercase letters
 *@c: The ineger to be checked
 *Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
