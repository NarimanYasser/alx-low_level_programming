#include "main.h"
/**
 * read_textfile - The reads a text file and prints it.
 * @filename: The name of the file to read it.
 * @letters: The numbers of bytes to read.
 * Return: Number of bytes to read and write.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	byte = read(fd, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);

	close(fd);
	return (byte);
}


