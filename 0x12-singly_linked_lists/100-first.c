#include <stdio.h>

/*use of function prototype*/
void message(void)__attribute__((constructor));

/**
 *message - Function to be executed
 *before main
 *
 *Function is executed
 */
void message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
