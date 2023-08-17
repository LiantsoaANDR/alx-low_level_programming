#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints number, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 * if the separator is NULL, don't print it
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int numb;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(list, int);
		printf("%d", numb);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
