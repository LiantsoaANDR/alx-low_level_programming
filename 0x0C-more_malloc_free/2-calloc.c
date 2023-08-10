#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * the memory is set to zero
 * @nmemb: the number of elements of the array
 * @size: the size of eac elements
 * Return: the allocated memory
 * NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (!nmemb || !size)
		return (0);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
