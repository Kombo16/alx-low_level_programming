#include "main.h"

/**
 *_strncpy - Function that copies string pointed to by src
 *including '\0' to buffer pointed to by dest
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: 0 success
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
