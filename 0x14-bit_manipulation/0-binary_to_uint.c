#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nbr = 0, pwr_2 = 1;
	int i = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;

	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			nbr += pwr_2;
		pwr_2 *= 2;
		i--;
	}

	return (nbr);
}
