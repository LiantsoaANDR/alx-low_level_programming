#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 * Failures are: file can not be created or written, or write failes, etc
 * Permissions of the created file: rw-------
 * Do not change permissions if the file already exists
 * if the file already exists, truncate it
 * if filename is NULL, return -1
 * if text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int l = 0;
	int fd, wd;

	if (!filename)
		return (0);

	if (!text_content)
		text_content = "";

	while (text_content[l])
		l++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	wd = write(fd, text_content, l);
	if (wd == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
