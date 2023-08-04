#include "main.h"

/**
 *print_binary - prints binary
 *representation of number
 *@n: number to be converted
 *
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/*Traverse throught bits from most significant*/
	while (m != 0)
	{
		/*check if bit in n is set to zero*/
		if ((n & m) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
			_putchar('0');
		m >>= 1;
	}
	if (flag != 1)
		_putchar('0');
}
