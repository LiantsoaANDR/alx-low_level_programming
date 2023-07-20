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

	for (i = 1; i < 100; i++)
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
	printf("Buzz\n");

	return (0);
}
