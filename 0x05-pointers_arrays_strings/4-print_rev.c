#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to print in reverse
 * no return value
 */
void print_rev(char *s)
{
	int i;
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
