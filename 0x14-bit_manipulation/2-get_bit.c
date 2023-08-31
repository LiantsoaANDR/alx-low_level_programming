#include "main.h"
/**
 * get_bit - give the value of a bit at a given index
 * @n: the number to search inside
 * @index: the index, starting from 0
 * Return: the value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	n = n >> index;
	return (n & 1);
}
