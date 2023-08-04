#include "main.h"
/**
 * _isalpha - checks if a char is in lower or upper case
 *
 * @c: is the char to check
 *
 * Return: 1 if in lower or upper case, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
