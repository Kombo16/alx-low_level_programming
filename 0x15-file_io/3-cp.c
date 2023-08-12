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
	int fd_1;
	int fd_2;
	char *file_from;
	char *file_to;
	ssize_t bytesread, byteswritten;
	char buffer[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_1 = open(file_from, O_RDONLY);
	bytesread = read(fd_1, buffer, BUFFER);
	if (fd_1 == -1 &&  bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd_1);
		exit(98);
	}
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd_2);
		exit(98);
	}
	byteswritten = write(fd_2, buffer, bytesread);
	while (bytesread > 0)
	{
		if (byteswritten == -1 || byteswritten != bytesread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd_2);
			exit(99);
		}
	}
	if (close(fd_1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
		exit(100);
	}
	if (close(fd_2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
		exit(100);
	}
	return (0);
}
