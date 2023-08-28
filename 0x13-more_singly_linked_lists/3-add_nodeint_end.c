#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to the pointer of the header
 * @n: the value of the member of the new element
 * Return: the address of the new element
 * return NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->n = n;
	new->next = 0;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (current->next)
		current = current->next;

	current->next = new;
	return (new);
}
