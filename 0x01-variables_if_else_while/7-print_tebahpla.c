#include <stdio.h>

/**
 * main - Function to reverse the alphabet
 * Return:0 success
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
