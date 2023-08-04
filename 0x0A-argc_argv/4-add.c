#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers
 * then prints the result
 * if no number is passed to the program, print 0
 * if one of the number is not digits, print Error
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, k, sum = 0;
	char *s;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[k] < 48 || s[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);

	return (0);
}
