#include "main.h"
/**
 *print_alphabet_x10 - Function to loop through the alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	i++;
	}
}
