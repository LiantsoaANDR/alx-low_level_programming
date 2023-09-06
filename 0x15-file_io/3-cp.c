#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void handle_error(char *message, char *argument, int code);
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for sucess
 * if argc is wrong, exit 97 and print 'Usage: cp file_from file_to'
 * followed by a new line on the POSIX standard error
 * Usage: cp file_from file_to
 * if file_to already exists, truncate it
 * if file_from does not exist, or can not read it, exit 98
 * and print 'Error: Can't read from file NAME_OF_THE_FILE'
 * followed by a new line on the POSIX standard error
 * NAME_OF_THE_FILE is the first argument passed to the program
 * if create or write to file_to fails, exit 99
 * and print 'Can't write to NAME_OF_THE_FILE'
 * followed by a new line on the POSIX standard error
 * where NAME_OF_THE_FILE is the second arg passed to the program
 * if closing the fd fails, exit 100 and print
 * 'Error: Can't close fd FD_VALUE' on the POSIX standard error
 * where FD_VALUE is the value of the file descriptor
 * Permissions of the created file: rw-rw-r--
 * if the file already exists, permissions do not change
 */
int main(int argc, char *argv[])
{
	int d_read, d_written, file_from, file_to, error_c1, error_c2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handle_error("Error: Can't read from fil", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		handle_error("Error: Can't write to", argv[2], 99);

	d_read = read(file_from, buffer, sizeof(buffer));
	if (d_read == -1)
		handle_error("Error: Can't read from fil", argv[1], 98);
	while (d_read > 0)
	{
		if (d_read == -1)
			handle_error("Error: Can't read from fil", argv[1], 98);
		d_written = write(file_to, buffer, d_read);
		if (d_written == -1)
			handle_error("Error: Can't write to", argv[2], 99);
		d_read = read(file_from, buffer, sizeof(buffer));
	}
	error_c1 = close(file_from);
	if (error_c1 == -1)
		handle_error("Error: Can't close fd", argv[1], 100);
	error_c2 = close(file_to);
	if (error_c2 == -1)
		handle_error("Error: Can't close fd", argv[2], 100);

	return (0);
}
/**
 * handle_error - prints a message and exit when an error occur
 * @message: the message to print
 * @argument: the argument from main function
 * @code: the exit code
 * Return: void
 */
void handle_error(char *message, char *argument, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", message, argument);
	exit(code);
}
