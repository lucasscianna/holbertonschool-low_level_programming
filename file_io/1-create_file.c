#include "main.h"
/**
* create_file - Creates a file and writes text to it
* @filename: Name of the file to create
* @text_content: NULL-terminated string to write into the file
*
* Return: 1 on success, -1 on failure (cannot create or write to file)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, n, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		n = write(fd, text_content, len);
		if (n != len)
			return (-1);
	}

	close(fd);

	return (1);
}
