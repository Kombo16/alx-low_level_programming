#include <stdio.h>

/**
 * main - Function to print alphabet in lower and uppercase
 * Return:0 success
 */

int main(void)
{
	char c = 'a';
	char h = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}
	putchar('\n');

	return (0);
}
