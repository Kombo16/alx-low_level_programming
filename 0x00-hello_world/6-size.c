#include <stdio.h>

/*
 * main - Entry point of program
 * Return 0 (success)
 */

int main(void)
{
       	float f;
	char c;
	int i;
	long int li;
	long long int lli;

	printf("float is %lu byte(s)\n",sizeof(f));
	printf("char is %lu bytes\n",sizeof(c));
	printf("int is %lu bytes\n",sizeof(i));
	printf("long int is %lu bytes\n",sizeof(li));
	printf("long long int is %lu bytes\n",sizeof(lli));
	return (0);
}
