#include "main.h"
#include <stddef.h>

/**
 *_strchr - Function that locates a character in a string
 *@s: pointer to a string
 *@c: character to be located
 *Return: 0 success
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
