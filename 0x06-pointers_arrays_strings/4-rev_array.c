#include "main.h"
/**
 * reverse_array - reverses the content of an array of intergers
 * @a: the array of integers
 * @n: the number of elements of the array
 * no return value
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n--;
	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i];
		a[n - i] = j;
	}
}
