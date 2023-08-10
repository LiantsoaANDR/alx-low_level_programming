#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the memory to allocate
 * Return: a pointer to the allocated memory
 * if malloc fails, exit 98
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
