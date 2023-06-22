#include "main.h"

/**
 *_isdigit - Function to check for a digit
 *@c: The inter to be checked
 *Return: 1 if is a digit 0 if other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
