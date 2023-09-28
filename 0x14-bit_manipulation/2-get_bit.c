#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to search into
 * @index: the given index
 * Return: the value of the bit at index index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	n >>= index;

	return (n & 1);
}
