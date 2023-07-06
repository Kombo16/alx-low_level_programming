#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - Function to check if string is a palindrome
 *@s: string to reverse
 *Return: 1 if palindrome 0 if not
 *
 *
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 *_strlen_recursion - Function to check length of a string
 *@s: pointer to a string
 *Return: length of a string
 *
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 *check_pal - Function that checks characters recursively for a palindrome
 *@s: pointer to  a string
 *@i: iterator
 *@len: length of the string
 *Return: 1 if palindrome 0 if not
 *
 *
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
