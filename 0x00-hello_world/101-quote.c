#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of program which uses write function
 * Return: 1 -Success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
