#include "main.h"

int _sqrrt(int n, int x);
/**
 * _sqrt_recursion - calculate the natural square root of a number
 * @n: the number
 * Return: the natural square root of the number as an int
 * if n does not have a natural square root then return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrrt(n, 0));
}
/**
 * _sqrrt - increment x until x times x equals to n
 * @n: the number to reach and n is >= 0
 * @x: the number to increment(should start at 0)
 * Return: the natural square root of n as an int
 * and -1 if there is no such value
 */
int _sqrrt(int n, int x)
{
	if ((x * x) > n)
	{
		return (-1);
	}
	if ((x * x) == n)
	{
		return (x);
	}
	return (_sqrrt(n, x + 1));
}
