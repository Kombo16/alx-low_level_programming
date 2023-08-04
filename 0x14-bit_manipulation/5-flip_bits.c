#include "main.h"

/**
 *flip_bits - Function that number of bits
 *required to flip from one number to another
 *@n: First number
 *@m: Second number
 *Return: number of required bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int count = 0;

	x = n ^ m;
	while (x != 0)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
