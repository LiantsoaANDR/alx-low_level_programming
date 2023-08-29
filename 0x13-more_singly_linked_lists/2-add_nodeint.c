#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the pointer of the header
 * @n: value of the member of the new list
 * Return: the address of the new element
 * return NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
