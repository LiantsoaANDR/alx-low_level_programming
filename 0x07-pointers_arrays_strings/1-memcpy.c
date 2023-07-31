#include "main.h"
/**
 * _memcpy - copies n bytes form a memory area to another memory area
 * @dest: pointer to the destination of the copy
 * @src: pointer to the source to copy
 * @n: the number of byte to copy
 * Return: a pointer to the memory area that took the copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
