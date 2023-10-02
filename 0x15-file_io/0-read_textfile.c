#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @filename: is the pointer to the file
 * @letters: is the number of letters it should read and print
 * Return: the number of letters it could read and print
 * if the file acn not be opend or read, return 0
 * if filename is NULL return 0
 * if write faile or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t fd, rd, wd;

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

	rd = read(fd, text, letters);
	if (rd == -1)
	{
		free(text);
		return (0);
	}

	wd = write(STDOUT_FILENO, text, rd);

	free(text);
	close(fd);
	return (wd);
}
