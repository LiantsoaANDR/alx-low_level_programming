#include "main.h"
/**
 * factorial - calculate the factorial of a given number
 * @n: the given number
 * Return: the factorial of the number as an int
 */
int factorial(int n)
{
	if (!n)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
