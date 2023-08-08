#include "main.h"
/**
 *main - Main function
 *@argc: argument count
 *@argv: argument vector
 *Return:
 *
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit (98);
	}
	cp = copy_contents(argv[1], argv[2]);

	return(0);
}
/**
 *copy_contents - Function that copies contents
 *from one file to another
 *@filesrc: Source
 *@filedest: Destination
 *Return: 
 *
 */
ssize_t copy_contents(const char *filesrc, const char *filedest)
	int fp1;
	int fp2;

	fp1 = open(filesrc, O_WRONLY |  );
	fp2 = open(filedest, O_RDWR | O_CREAT | O_TRUNC);
	{

	}
}
