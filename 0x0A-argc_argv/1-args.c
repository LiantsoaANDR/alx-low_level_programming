#include <stdio.h>
/**
 * main - prints the number of argumets passed into it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, int *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
