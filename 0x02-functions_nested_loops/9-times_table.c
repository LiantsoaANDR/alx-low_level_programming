#include "main.h"
/**
 * times_table - prints the 9 times table starting with 0
 *
 * no return value
 */
void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod < 10)
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
