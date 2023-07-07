#include "main.h"

/**
 *_strcat - Function that concatenates strings
 *@dest: destination
 *@src: source
 *Return: 0 success
 *
 */

char *_strcat(char *dest, char *src)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
		count++;
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
