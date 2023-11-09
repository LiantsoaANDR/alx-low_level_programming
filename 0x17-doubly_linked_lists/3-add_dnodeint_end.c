#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: pointer to the pointer of the head
 * @n: the int element of the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (current && current->next)
		current = current->next;

	new->n = n;
	new->prev = current;
	new->next = NULL;
	if (current)
		current->next = new;

	return (new);
}
