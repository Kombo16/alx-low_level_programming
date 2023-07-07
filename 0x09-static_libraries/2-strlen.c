#include "main.h"

/**
 *_strlen - Function returns length of a string
 *@s: pointer to a character
 *Return: length of a string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s == '\0')
	{
		len++;
		s++;
	}
	return (len);
}

