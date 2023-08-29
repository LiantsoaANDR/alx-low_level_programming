#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to the pointer of the head of the list
 * Return: the head node's data(n)
 * if the list is empty, return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int nbr;

	if (!(*head))
		return (0);
	nbr = current->n;
	*head = current->next;
	free(current);

	return (nbr);
}
