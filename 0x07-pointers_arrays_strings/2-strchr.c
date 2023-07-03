#include "main.h"

/**
 *_strchr - Function that locates a character in a string
 *@s: A pointer to a character
 *@c: The character to be located
 *Return: NULL value
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
