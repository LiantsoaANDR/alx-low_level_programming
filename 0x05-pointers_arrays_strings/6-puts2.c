#include "main.h"
/**
 * puts2 - prints every two character of a string
 * @str: the string to check
 * no return value
 */
void puts2(char *str)
{
	int i;
	int l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
