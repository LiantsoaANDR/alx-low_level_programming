#include "main.h"

int prime_checker(int n, int x);
/**
 * is_prime_number - Checks if the a number is a prime number
 * @n: the number to check
 * Return: 1 if true and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_checker(n, n - 1));
}
/**
 * prime_checker - calculace n modulo until x = 2
 * @n: the number to divide
 * @x: the divider
 * Return: 1 if n can only be divided by itself and 1
 * return 0 other wise
 */
int prime_checker(int n, int x)
{
	if ((n % x) == 0)
	{
		return (0);
	}
	if ((n % x) && x == 2)
	{
		return (1);
	}
	return (prime_checker(n, x - 1));
}
