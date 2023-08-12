#include "main.h"

/**
 *append_text_to_file - Function that appends
 *file to end of file
 *@filename: name of file
 *@text_content: NULL terminated string
 *Return: 1 if file exists -1 if it doesn't
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswritten;
	size_t text_length;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		byteswritten = write(fd, text_content, text_length);
		if (byteswritten == -1 || (size_t)byteswritten != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
