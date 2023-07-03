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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
