#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_all - Function that prints anything
 *@format: list of all types of arguments
 *passed to the function
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char *str;
	char *sep = "";
	int i = 0;

	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", sep, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", sep, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", sep, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (!str)
				printf("(nil)");
			printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
