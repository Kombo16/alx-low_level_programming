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
	int found;

	while (*s)
	{
		found = 0;
		for (char *a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		count++;
		s++;
	}
	return (count);
}
