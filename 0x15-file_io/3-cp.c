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
}
