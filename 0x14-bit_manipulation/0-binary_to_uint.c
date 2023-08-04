#include "main.h"

/**
 *binary_to_uint - Converts binary to unsigned
 *int
 *@b: pointer to string of 0 and 1 chars
 *Return: coverted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	/*Traverse to end of string*/
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		/*shift by 1 position if char is 0*/
		res = res << 1;
		if (*b == '1')
			/*set bit to 1*/
			res |= 1;
		b++;
	}
	return (res);
}
