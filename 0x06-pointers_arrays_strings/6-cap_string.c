#include "main.h"

/**
 *cap_string - Function to capitalize all words of a string
 *@s: The string to be capitalized
 *Return: the pointer to the destinaton
 *
 */

char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
			s[index - 1] == '\t' ||
			s[index - 1] == '\n' ||
			s[index - 1] == ',' ||
			s[index - 1] == ';' ||
			s[index - 1] == '.' ||
			s[index - 1] == '!' ||
			s[index - 1] == '?' ||
			s[index - 1] == '"' ||
			s[index - 1] == '(' ||
			s[index - 1] == ')' ||
			s[index - 1] == '{' ||
			s[index - 1] == '}' ||
			index == 0)
		{
			s[index] -= 32;
		}
		index++;
	}
	return (s);
}
