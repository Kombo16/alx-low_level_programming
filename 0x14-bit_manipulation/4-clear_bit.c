#include "main.h"

/**
 *clear_bit - sets value of a bit to 0
 *at given index
 *@n: number whose bit value is to be set to 1
 *@index: index
 *Return: 1 if it works, 0 if it doesn't;
 *
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	/*check if index is within range*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	m = 1UL << index;
	/*set index at given bit to 0*/
	*n &= ~m;
	return (1);

}
