#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 * if the separator is NULL, don't print it
 * if one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (!string)
			string = "(nil)";
		printf("%s", string);
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
