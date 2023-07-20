#include "main.h"
/**
 * more_numbers - prints 10 times 0 to 14
 *
 * no return value
 */
void more_numbers(void)
{
	int i;
	int j;
	int d;
	int e;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			e = j;
			d = j / 10;
			if (j > 9)
			{
				_putchar(d + '0');
				e = j % 10;
			}
			_putchar(e + '0');
		}
		_putchar('\n');
	}
}
