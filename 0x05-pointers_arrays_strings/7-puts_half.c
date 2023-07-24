#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string to check and print
 * no return value
 */
void puts_half(char *str)
{
	int i, l, l2;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		l2 = l / 2;
	}
	else
	{
		l2 = (l - 1) / 2;
	}
	for (i = l2; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
