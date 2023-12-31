#include "variadic_functions.h"
/**
 * sum_them_all - sums of all its parameters
 * @n: the number of number to sum
 * Return: the sum of all parameters as an int
 * if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
