#include "main.h"

/**
 *string_toupper - Function that changes all lowercase
 *letters of a string to uppercase
 *@s: The input string
 *
 *Return: the pointer to destination
 *
 */

char *string_toupper(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		if ((*(s + n) >= 97) && (*(s + n) <= 122))
			*(s + n) = *(s + n) - 32;
		n++;
	}
	return (s);
}
