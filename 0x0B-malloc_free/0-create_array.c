#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * initializes it with a specific array
 * @size: the size of the array
 * @c: the char that initialies the array
 * Return: a pointer to that array of char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (!size)
		return (0);

	array = malloc(sizeof(char) * size);
	if (!array)
		return (0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
