#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - Function that prints strings followed by a new line
 *@separator: separates the parameters
 *@n: number of arguments
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(args, const char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
