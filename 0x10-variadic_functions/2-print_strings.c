#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_strings - Function that prints strings followed by a new line
 *@separator: separates the parameters
 *@n: number of arguments
 *
 *Description: if separator is NULL,it is not printed
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
<<<<<<< HEAD
		if (separator != NULL && i ! (n - 1))
=======
		if (separator != NULL && i != (n - 1))
>>>>>>> 3dc7abf54f357985b95bccb258019cc9b8af0226
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
