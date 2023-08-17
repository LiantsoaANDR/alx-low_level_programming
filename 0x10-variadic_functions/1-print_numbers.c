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

	if (!separator)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		numb = va_arg(list, int);
		if (i != n - 1)
			printf("%d%s", numb, separator);
		else
			printf("%d", numb);
	}
	printf("\n");
	va_end(list);
}
