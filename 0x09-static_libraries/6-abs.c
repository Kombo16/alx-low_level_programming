#include "main.h"

/**
 *_abs - Function that computes absolute value of integer
 *@c: integer
 *Return: 0 success
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		int a;

		a = c * -1;
		return (a);
	}
	else
		return (c);
}
