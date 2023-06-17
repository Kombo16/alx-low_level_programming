#include <stdio.h>

/**
 * main - Function to print different combination of two digits
 * Return:0 success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);

			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(',');

				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
