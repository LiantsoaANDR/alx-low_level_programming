#include "main.h"
/**
 * create_file - creates a file
 * @filename: is the name of the file to create
 * @text_content: is a string to write to the file
 * Return: 1 on success, -1 on failure
 * Failure : file can not be created or written, or write fails, etc
 * Created file must have those permissions : rw-------, do not change
 * permissions if the file alread exists
 * if the file alread exists, truncate it
 * if filename is NULL, return -1
 * if text_content is NULL, create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	unsigned int l = 0;
	int fd, d_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";
	while (text_content[l])
		l++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	d_written = write(fd, text_content, l);
	if (d_written == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
