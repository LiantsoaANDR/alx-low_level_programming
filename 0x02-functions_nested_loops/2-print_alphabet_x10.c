#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times
 * the alphabet in lowercase
 *
 * no return value
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
