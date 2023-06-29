#include "main.h"

/**
 *_strcat - Function to concatenate strings
 *@dest: The string being added
 *@src: The string to be added to
 *Return: pointer to destination
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
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
