#include <stdio.h>

/**
 * main - Function to print different combination of two digits
 * Return:0 success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		if (i != 57)
		{
			for (j = 48; j < 59; j++)
			{
				if (j != 58)
				{
					putchar(i);

					putchar(j);

					putchar(',');

					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
