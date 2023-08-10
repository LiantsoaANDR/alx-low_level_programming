#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory bock
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 * If new_size > old_size, the “added” memory should not be initialized
 * Return: reallocated block of memory
 * If new_size == old_size do not do anything and return ptr
 * If ptr is NULL, then the call is equivalent to malloc(new_size)
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr) then return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!new_size && ptr)
	{
		free(ptr);
		return (0);
	}

	new = malloc(new_size);
	if (!new)
		return (0);
	old = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new[i] = old[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new[i] = old[i];
	}
	free(ptr);
	return (new);
}
