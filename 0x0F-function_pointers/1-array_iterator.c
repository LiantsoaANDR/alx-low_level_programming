#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a paramter
 * on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
