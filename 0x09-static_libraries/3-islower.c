#include "main.h"
/**
 * _islower - checks if the char is in lower case
 *
 * @c: is the char to check
 *
 * Return: 1 if in lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
