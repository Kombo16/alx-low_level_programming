#include "main.h"

/**
 *_strlen - Function to return length of string
 *@s: Character whose length os to be outputted
 *Return: length of string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

