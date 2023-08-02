#include "main.h"
/**
 * _pow_recursion - calculate the value of x to the power of y
 * @x: number to raise to the power of y
 * @y: the power
 * Return: the value of x raised to the power of y as an int
 * if y < 0, then return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (!y)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
