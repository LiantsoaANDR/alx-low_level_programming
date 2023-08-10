#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * the array contain value from a min value to a max value
 * @min: the min value
 * @max: the max value
 * Return: pointer to that array
 * return NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int start = min, i = 0;
	int *array;

	if (min > max)
		return (0);
	while (start < max)
	{
		start++;
		i++;
	}

	array = malloc(sizeof(int) * (i - 1));
	if (!array)
		return (0);

	start = min;
	for (i = 0; start < max; i++)
	{
		array[i] = start;
		start++;
	}
	return (array);
}
