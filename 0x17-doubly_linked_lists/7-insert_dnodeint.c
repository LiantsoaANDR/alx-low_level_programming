#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of the head
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: the int element of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	if (!idx)
	{
		new->next = current;
		*h = new;
		return (new);
	}

	while (current && i < idx)
	{
		if (i == idx - 1)
		{
			printf("breadk occured\n");
			break;
		}
		current = current->next;
		i++;
	}
	if (idx > ++i && !current)
	{
		free(new);
		return (NULL);
	}

	new->prev = current;
	new->next = current->next;
	if (current->next)
		current->next->prev = new;

	return (new);
}
