#include "main.h"

/**
 *_abs - Function that computes absolute value of integer
 *@c: integer
 *Return: 0 success
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		int a;

		a = n * -1;
		return (a);
	}
	else
		return (n);
}
