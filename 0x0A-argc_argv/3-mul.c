#include <stdio.h>
#include "main.h"

/**
 *_atoi - Function that converts string to integer
 *@s: pointer to  a string
 *Return: 0 success
 *
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = - digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + i] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 *main - main function to multiply integers
 *@argc: argument count
 *@argv: argument vector
 *Return:0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul = _atoi(argv[1]) * _atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
