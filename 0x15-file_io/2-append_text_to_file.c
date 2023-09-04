#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * Do no create the file if it does not exist
 * if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int l = 0;
	int fd, d_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";
	while (text_content[l])
		l++;

	fd = open(filename, O_WRONLUY | O_APPEND);
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
