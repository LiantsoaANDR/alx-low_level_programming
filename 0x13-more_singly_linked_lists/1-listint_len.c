#include "lists.h"
/**
 * listint_len - give the number of elements in a linked list
 * @h: the header of the list
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
