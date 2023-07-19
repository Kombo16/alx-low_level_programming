#include <stdio.h>
#include "main.h"

/**
 *main - main function to add integers
 *@argc: argument count
 *@argv: argument vector
 *Return:0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!_atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += _atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
