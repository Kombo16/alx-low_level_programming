#include <stdio.h>
#include <stdlib.h>

/**
 *main - main function that prints arguments
 *@argc: argument count
 *@argv: argument vector
 *Return:0 success
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
