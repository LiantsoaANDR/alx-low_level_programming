#include "main.h"
/**
 * flip_bits - give the number of bits you would need to flip to get from
 * one number to another
 * @n: the number to guess how many flips are needed
 * @m: the number to compare with the first one
 * Return: the number of bits needed to flip n to become m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbr = 0;
	unsigned int comp;

	comp = n ^ m;
	while (comp)
	{
		nbr += (comp & 1);
		comp >>= 1;
	}
	return (nbr);
}
