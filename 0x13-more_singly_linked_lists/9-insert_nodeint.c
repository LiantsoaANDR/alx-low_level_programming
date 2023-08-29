#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the pointer of the head
 * @idx: index of the list where the new node sould be added
 * @n: the data(n) of the new node
 * Return: the address of the new node
 * NULL if it failed
 * if it is not possible to add the new node at idx, return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *before, *current = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	while (i < idx && current)
	{
		if (i == idx - 1)
			before = current;
		current = current->next;
		i++;
	}
	if (i < idx && !current)
	{
		free(new);
		return (0);
	}
	before->next = new;
	new->n = n;
	new->next = current;
	return (new);
}
