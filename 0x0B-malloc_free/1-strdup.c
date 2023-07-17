#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Function that returns a pointer to
 *a newly allocated space
 *@str: pointer to  a string
 *Return: 0 success
 *
 *
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}