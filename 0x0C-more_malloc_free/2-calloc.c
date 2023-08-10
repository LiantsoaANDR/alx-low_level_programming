#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * the memory is set to zero
 * @nmemb: the number of elements of the array
 * @size: the size of each array
 * Return: the allocated memory
 * NULL if nmemb or size is 0, or if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char **ptr;

	if (!nmemb || !size)
		return (0);

	ptr = malloc(sizeof(unsigned int *) * nmemb);
	if (!ptr)
		return (0);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = malloc(sizeof(unsigned int) * size);
		if (!ptr[i])
		{
			for (i = 0; i < nmemb; i++)
				free(ptr[i]);
			free(ptr);
			return (0);
		}
	}
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
