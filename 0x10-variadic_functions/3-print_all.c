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

	char *str, *sep = "";
	int i = 0;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
