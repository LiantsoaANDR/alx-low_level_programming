#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @head: pointer to the pointer of the head
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (!head || !(*head))
		return (-1);

	if (!index)
	{
		if (current->next)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		if (i == index)
			break;
		current = current->next;
		i++;
	}
	if (index > i && !current)
		return (-1);

	current->prev->next = current->next;

	if (current->next)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
