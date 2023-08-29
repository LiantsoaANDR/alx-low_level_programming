#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at an given index of a listint_t
 * @head: pointer to the pointer of the head
 * @index: index of the node to be deleted
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *current = *head;
	unsigned int i = 0;

	if (!index)
	{
		if (!current)
			return (-1);
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index && current)
	{
		if (i == index - 1)
			before = current;
		current = current->next;
		i++;
	}
	if (!current)
		return (-1);
	before->next = current->next;
	free(current);
	return (1);
}
