#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first int to swap value
 * @b: second int to swap value
 * no return value
 */
void swap_int(int *a, int *b)
{
	int mem;

	mem = *a;
	*a = *b;
	*b = mem;
}
