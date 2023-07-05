#include "main.h"

/**
 *factorial - Function tha returns the factorial of a number
 *@n: The input
 *Return: 0 Success
 *
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
