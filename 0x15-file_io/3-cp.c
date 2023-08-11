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
	char fd1 = argv[1];
	char fd2 = argv[2];
	ssize_t bytesread, byteswritten;
	char buffer[BUFFER];

	fd1 = open(filesrc, O_WRONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_ FILENO, "Error: Can't read from file %s", fd1);
		exit(98);
	}
	bytesread = read(fd1, buffer, BUFFER);

	fd2 = open(filedest, O_RDWR | O_CREAT | O_TRUNC ,
			O_IRUSR | O_IWUSR | O_IRGRP | O_IWGRP);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", fd2);
		exit(98);
	}
	byteswritten = write(STDIN_FILENO, buffer, bytesread)
}
