#include "main.h"

/**
 * create_file - creates a new file
 * @filename: the name of a file
 * @text_content: NULL terminated string to write to file
 * Return: -1 if filename is null, 1 when Successful
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wcont, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		wcont = write(fd, text_content, i);
		if (wcont != i)
			return (-1);
	}

	close(fd);

	return (1);
}
