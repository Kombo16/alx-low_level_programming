#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - Function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *Return:concatenated string
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i, cl;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	i  = cl = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[cl] != '\0')
		cl++;
	conc = malloc(sizeof(char) * (i + cl + 1));

	if (conc == NULL)
		return (NULL);
	i = cl = 0;

	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[cl] != '\0')
	{
		conc[i] = s2[cl];
		i++;
		cl++;
	}
	conc[i] == '\0';
	return (conc);
}
