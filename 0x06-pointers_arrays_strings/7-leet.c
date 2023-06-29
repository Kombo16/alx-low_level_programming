#include "main.h"

/**
 *leet - Function that encodes a string to 1337
 *@str: String to be encoded
 *Return: the pointer to destination
 *
 */

char *leet(char *str)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[i])
				str[i] == s2[i];
		}
	}
	return (str);
}
