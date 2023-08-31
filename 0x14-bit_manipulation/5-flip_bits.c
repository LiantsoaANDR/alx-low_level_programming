#include "main.h"
/**
 * flip_bits - counts the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of flip needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbr = 0;
	unsigned long int ref;

	ref = n ^ m;
	while (ref)
	{
		nbr += ref & 1;
		ref = ref >> 1;
	}
	return (nbr);
}
