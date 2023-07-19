#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - Function that prints a name
 *@name: pointer to char array
 *@f: function pointer
 *
 *
 *
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
