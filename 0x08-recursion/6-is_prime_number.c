#include "main.h"

/**
 *is_prime_number - Function that says if integer is a prime number
 *@n: number to evaluate
 *Return:1 if integer is prime number,0 if otherwise
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n, n - 1));
}

/**
 *actual_prime_number - Function that calculates
 *if a number is prime recursively
 *@n: number to evaluate
 *@i: iterator
 *Return:1 if n is prime 0 if not
 *
 *
 */

int actual_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime_number(n, i - 1));
}
