#include "main.h"

/**
 *_memset - Function that fills memory with constant byte
 *@s: pointer to a character
 *@b: character
 *@n: number of bytes
 *Return:0 success
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
