#include "main.h"
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
		{
			dprintf(STDERR_FILENO, "Error: Can't read from fil %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	d_read = read(file_from, buffer, 1024);
	while (d_read)
	{
		if (d_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from fil %s\n", argv[1]);
			exit();
		}
		d_written = write(file_to, buffer, 1024);
		if (d_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		d_read = read(file_from, buffer, 1024);
	}
	error_c1 = close(file_from);
	error_c2 = close(file_to);
	if (error_c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (error_c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[2]);
		exit(100);
	}

	return (0);
}
