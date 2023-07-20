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

	char ch;
	int n;
	double d;
	char *str;
	char *sep = "";
	int i = 0;

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					ch = va_arg(args, int);
					printf("%s%c", sep, ch);
					break;
				case 'i':
					n = va_arg(args, int);
					printf("%s%d", sep, n);
					break;
				case  'f':
					d = va_arg(args, double);
					printf("%s%f", sep, d);
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
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
	va_end(args);
	printf("\n");
}
