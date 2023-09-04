#include "main.h"

/**
 * append_text_to_file - The appends text at the end of a file
 * @filename: The filename.
 * @text_content: The added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist.
 * or if it fails.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int byte;
	int a;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (byte = 0; text_content[byte]; byte++)
			;

		a = write(fd, text_content, byte);

		if (a == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
