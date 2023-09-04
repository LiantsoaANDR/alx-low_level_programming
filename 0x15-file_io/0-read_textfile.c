#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reades a text file and prints it to the POSIX stdout
 * @filename: is the pointer to the file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read an print
 * if the file can not be opened or read, return 0
 * if filename is NULL, return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t d_read, d_written, fd;

	if (!filename)
		return (0);

	text = malloc(sizeof(char) * letters);
	if (!text)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}

	d_read = read(fd, text, letters);
	if (d_read == -1)
	{
		free(text);
		return (0);
	}

	d_written = write(STDOUT_FILENO, text, d_read);
	free(text);
	close(fd);

	return (d_written);
}
