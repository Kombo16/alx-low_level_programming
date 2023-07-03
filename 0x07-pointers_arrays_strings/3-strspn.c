#include "main.h"

/**
 *_strspn - Function that gets the length of a prefix substring
 *@s: The pointer to a character
 *@accept: The pointer to a character
 *Return: 0
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r], r++)
		{
			if (*s == accept[r])
			{
				count++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}
