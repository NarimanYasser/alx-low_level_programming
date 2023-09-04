#include "main.h"

/**
 * create_file - The creates a file.
 * @filename: The filename.
 * @text_content: The content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int byte;
	int a;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (byte = 0; text_content[byte]; byte++)
		;

	a = write(fd, text_content, byte);

	if (a == -1)
		return (-1);

	close(fd);

	return (1);
}
