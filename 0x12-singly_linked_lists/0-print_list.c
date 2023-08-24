#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the list to print its elements
 * Return: the number of nodes
 * if str is NULL, print [0] (nil)
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
