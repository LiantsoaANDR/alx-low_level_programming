#include "main.h"
/**
 *print_alphabet - Prints the alphabet in lowercase
 *
 *no return value
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
