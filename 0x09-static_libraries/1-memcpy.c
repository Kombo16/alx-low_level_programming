#include "main.h"

/**
 *_memcpy - Function that copies memory area from source to destination
 *@dest: destination
 *@src: source
 *@n: number of bytes
 *Return: destination
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr  = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		*ptr++ = *src++;
	return (dest);
}
