#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr = 0;
	const dlistint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		nbr++;
		current = current->next;
	}

	return (nbr);
}
