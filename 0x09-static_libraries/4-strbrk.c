#include "main.h"

/**
 *_strbrk - Function that searches a string for any set of bytes
 *@s: pointer to a character
 *@accept: pointer to a string
 *Return: 0 successs
 *
 *
 */

char *_strbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}

