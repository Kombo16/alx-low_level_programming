#include "main.h"

/**
 *_strcmp - Function that compares two strings
 *@s1: First string
 *@s2: string to be compared with
 *Return:s1[i] - s2[i]
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
