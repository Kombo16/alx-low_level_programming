#include "main.h"

/**
 *_isalpha - Function to check for alphabet characters
 *@c: The integer to print
 *Return: 1 if alphabet 0 if other
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 97 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
