#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 *_sqrt_reqursion - Function that returns natural square root of number
 *@n: number to calculate square root
 *Return: resulting square root
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion - Function that recurses to 
 *find natural square root of number
 *@n: number to calculate square root
 *@i: iterator
 *Return: resulting square root
 *
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_conversion(n, i + 1));
}
