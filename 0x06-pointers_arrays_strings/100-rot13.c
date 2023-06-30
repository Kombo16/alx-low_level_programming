#include "main.h"

/**
 *rot13 - Function that encodes string using rot13
 *@s: String to be encoded
 *Return: The encoded value
 *
 */

char *rot13(char *s)
{
	int i, j;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] == s2[j];
			}
		}
	}
	return (s);
}

