#include <stdio.h>

/**
 * main - Function to print different combination of two digits
 * Return:0 success
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar('0' + i / 10);

			putchar('0' + i % 10);

			putchar(' ');

			putchar('0' + j / 10);

			putchar('0' + j % 10);

			putchar(',');

			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
