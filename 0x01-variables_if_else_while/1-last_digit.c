#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 *main - Print the last digit of a random number and compare it with 5
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		last = (((-1) * n) % 10) * (-1);
	}
	else
	{
		last = n % 10;
	}

	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}
