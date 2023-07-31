#include "main.h"
/**
 * _memset - Fills the thirst n bytes of the memory area 
 * with a constant byte
 * @s: pointer to the memory area
 * @b: the constant byte as a char
 * @n: the number of byte to change
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
