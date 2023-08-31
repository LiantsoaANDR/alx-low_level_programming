#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 * return 0 if there is one more chars in the string b
 * that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int exp = 1, nbr = 0;
	int l = 0;

	if (!b)
		return (0);
	while (b[l])
		l++;

	for (l -= 1; l >= 0; l--)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		if (b[l] == '1')
			nbr += exp;
		exp *= 2;
	}
	return (nbr);
}
