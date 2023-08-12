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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (98);
	}
	int fd1;
	int fd2;
	char *file_from = argv[1];
	char *file_to = argv[2];
	ssize_t bytesread, byteswritten;
	char buffer[BUFFER];

	fd1 = open(file_from, O_RDONLY);
	bytesread = read(fd1, buffer, BUFFER);
	if (fd1 == -1 &&  bytesread == -1)
	{
		dprintf(STDERR_ FILENO, "Error: Can't read from file %s\n", fd1);
		exit(98);
	}
	fd2 = open(fd2, O_WR0NLY | O_CREAT | O_TRUNC ,
			O_IRUSR | O_IWUSR | O_IRGRP | O_IWGRP);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd2);
		exit(98);
	}
	byteswritten = write(STDIN_FILENO, buffer, bytesread);
	while (bytesread > 0)
	{
		if (byteswritten == -1 || byteswritten != bytesread)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s", fd2);
			exit(99);
		}

	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
