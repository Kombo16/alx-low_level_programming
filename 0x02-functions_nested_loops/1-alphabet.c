#include <stdio.h>
/**
 *main - Function to print alphabet
 *Return:0 success
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}
/**
 *print_alphabet - Function to loop through the alphabet
 *void - no specific value set
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
