#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: is a list of types of argumemts passed to the fuction
 * the formats are:
 * c for char
 * i for int
 * f for float
 * s for char * (if the string is NULL, print (nil) instead)
 * any other char sould be ignored
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, l = 0;
	int ci, checker;
	double f;
	char *string;

	while (format[l])
		l++;
	va_start(list, format);
	while (format[i] && format)
	{
		checker = 0;
		switch (format[i])
		{
			case 'c':
				ci = va_arg(list, int);
				printf("%c", ci);
				break;
			case 'i':
				ci = va_arg(list, int);
				printf("%d", ci);
				break;
			case 'f':
				f = va_arg(list, double);
				printf("%f", f);
				break;
			case 's':
				string = va_arg(list, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				checker = 1;
				break;
		}
		if (i < l - 1 && !checker)
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
