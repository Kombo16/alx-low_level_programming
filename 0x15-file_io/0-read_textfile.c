#include "main.h"

/**
 *read_textfile - Function that reads textfile
 *@filename: A string of chars
 *@letters: no of letters printed
 *Return: actual number of
 *letters read and printed
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesread;
	ssize_t byteswritten;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*create buffer where the chars are stores*/
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	byteswritten = write(STDOUT_FILENO, buffer, bytesread);
	if (byteswritten == -1 || byteswritten != bytesread)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (byteswritten);
}
