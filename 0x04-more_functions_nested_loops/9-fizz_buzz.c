#include <stdio.h>
#include "main.h"
/**
 * main - prints 1 to 100
 * multiples of three are replaced by Fizz
 * multiples of five replaced by Buzz
 * multiples of both replaced by FizzBuzz
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
