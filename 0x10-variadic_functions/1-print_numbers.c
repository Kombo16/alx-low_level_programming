#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - Function that prints numbers followed by a new line
 *@separator: separates the parameters
 *@n: number of arguments
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
