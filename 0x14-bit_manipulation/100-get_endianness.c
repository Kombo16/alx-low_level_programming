#include <stdio.h>

/**
 *get_endianness - Function that checks
 *endianness
 *Return: 0 if big endian
 *1 if little endian
 *
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		/*little endian*/
		return (1);
	/*big endian*/
	return (0);
}
