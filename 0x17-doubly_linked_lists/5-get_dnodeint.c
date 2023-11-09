#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at a given index of a dlistint_t
 * @head: pointer to the header of the list
 * @index: the given index, starting form 0
 * Return: the node at the index, NULL if the node doesn't exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}

	return (NULL);
}
