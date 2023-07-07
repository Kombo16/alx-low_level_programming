#include "main.h"

/**
 *_strcpy - Function that copies string pointed to by src
 *including '\0' to buffer pointed to by dest
 *@dest: destination
 *@src: source
 *Return: 0 success
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
		l++;
	for (; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
