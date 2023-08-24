#include "lists.h"
/**
 * list_len - give the number of elements in a linked list-t list
 * @h: pointer to the list_t list
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
