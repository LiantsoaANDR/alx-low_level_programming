#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void exit_error(char *msg, char *arg, int code);
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 * if argc is wrong, exit 97
 * if file_to already exists, truncate it
 * if file_from does not exist, or can not read it, exit 98
 * if create or write to file_to fails, exit 99
 * if closing the fd fails, exit 100
 * Permissions of the cread file: rw-rw-r--
 * if the file already exists, persmissions do not change
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wd;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		exit_error("Error: Can't read from file", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		exit_error("Error: Can't write to", argv[2], 99);

	rd = read(file_from, buffer, sizeof(buffer));
	if (rd == -1)
		exit_error("Error: Can't read from file", argv[1], 98);

	while (rd > 0)
	{
		wd = write(file_to, buffer, rd);
		if (wd == -1)
			exit_error("Error: Can't write to", argv[2], 99);

		rd = read(file_from, buffer, sizeof(buffer));
		if (rd == -1)
			exit_error("Error: Can't read from file", argv[1], 98);
	}

	if (close(file_from) == -1)
		exit_error("Error: Can't close fd", argv[1], 100);

	if (close(file_to) == -1)
		exit_error("Error: Can't close fd", argv[2], 100);

	return (0);
}
/**
 * exit_error - prints an error message then exit when an error occures
 * @msg: the error message
 * @arg: the argument form argv form main function
 * @code: the exit code
 * Return: void
 */
void exit_error(char *msg, char *arg, int code)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);

	exit(code);
}
