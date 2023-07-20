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
	const char *ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			ch = va_arg(args, int);
			printf("%s%c", sep, ch);
		}
		else if (*ptr == 'i')
		{
			n = va_arg(args, int);
			printf("%s%d", sep, n);
		}
		else if (*ptr == 'f')
		{
			d = va_arg(args, double);
			printf("%s%f", sep, d);
		}
		else if (*ptr == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s%s", sep, str);
		}
		sep = ", ";
		ptr++;
	}
	printf("\n");
	va_end(args);
}
