#include "main.h"

/**
 *wildcmp - Function that compares two strings
 *@s1: pointer to string
 *@s2: pointsr to string
 *Return: 1 if string is identical else 0
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1)); /*Recursive call to next character*/
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
