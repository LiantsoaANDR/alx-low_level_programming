#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times _ should be printed
 *
 * no return value
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (n = n; n > 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
