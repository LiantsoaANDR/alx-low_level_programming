#include "3-calc.h"
/**
 * main - prints the value of an input operation of 2 numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 * if the number of arguments is wrong, print Error and exit 98
 * if the operator is wrongm print Error and exit 99
 * if the user tries to divide by 0, print Error and exit 100
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != "+" ||
	*argv[2] != "-" ||
	*argv[2] != "*" ||
	*argv[2] != "/" ||
	*argv[2] != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == "/" ||
	*argv[2] == "%") && *argv[3] == "0")
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = get_op_func(argv[2])(num1, num2);
	printf("%d\n", result);

	return (0);
}
