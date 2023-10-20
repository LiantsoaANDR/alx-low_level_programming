#include "main.h"
/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 0x04000002;
	char *pointer;

	pointer = (char *)&num;

	if (*pointer == 0x04)
		return (0);

	return (1);
}
