#include "main.h"
/**
 * clear_bit - setes the value of a bit to 0 at a given index
 * @n: pointer to the number where to find the bit to set
 * @index: the given index
 * Return: 1 if worked, -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
