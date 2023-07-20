#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Function that returns sum of parameters
 *@n: number of parameters passed
 *@...: variable number of parameters
 *Return: sum of parameters else 0 if n == 0
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;
	int sum = 0;

	va_start(ap, n);
	for (index = 0; index < n; index++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
