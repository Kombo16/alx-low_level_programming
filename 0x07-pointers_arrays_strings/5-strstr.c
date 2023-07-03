#include "main.h"

/**
 *_strstr - Function that locates a substring
 *@haystack: input pointer to a character
 *@needle: input pointer to a character
 *Return: 0
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
