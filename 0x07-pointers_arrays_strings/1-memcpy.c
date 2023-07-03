#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: The destination
 *@src: The source area
 *@n: The number of bytes
 *Return: the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
		*ptr++ = *src++;
	return (dest);
}
