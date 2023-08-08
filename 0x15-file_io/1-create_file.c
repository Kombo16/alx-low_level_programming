#include "main.h"

/**
 *creat_file - Function that creates file
 *@filename: name of created file
 *@text_content: NULL terminated string
 *to write to file
 *Return: 1 on success -1 if it fails
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswritten;
	size_t text_length;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		byteswritten = write(STDIN_FILENO, text_content, text_length);
		if (byteswritten == -1 || (size_t)byteswritten != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close (fd);
	return (1);

}
