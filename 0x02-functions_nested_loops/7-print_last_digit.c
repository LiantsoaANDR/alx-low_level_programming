#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the number to check as an int
 *
 * Return: an int
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		n = n * (-1);
	}
	l = n % 10;
	_putchar(l+ '0');

	return (l);
}
