#include "main.h"

/**
 *_abs - Function to compute absolute value of integer
 *@c: The integer to print
 *Return: a if number is negative and c if number is positive
 */
int _abs(int c)
{
	if (c < 0)
	{	int a;

		a = c * -1;
		return (a);
	}
	else
		return (c);
}
