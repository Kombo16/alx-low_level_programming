#include "main.h"

/**
 *get_bit - value of a bit at a given index
 *@n: the number whose bit value is to be returned
 *@index: inedx of bit you want to get
 *Return: value of bit at index
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	/*check if index is within valid range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1UL << index;

	return ((n & m) ? 1 : 0);
}
