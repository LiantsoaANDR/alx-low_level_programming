#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - counts the number of elements in a dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t nbr = 0;

	while (current)
	{
		nbr++;
		current = current->next;
	}

	return (nbr);
}
