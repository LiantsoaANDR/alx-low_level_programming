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
	listint_t *new_head;
	int nbr;

	if (!(*head))
		return (0);
	new_head = malloc(sizeof(listint_t));
	if (!new_head)
		return (0);
	new_head->n = (*head)->next->n;
	new_head->next = (*head)->next->next;
	nbr = (*head)->n;
	free(*head);
	*head = new_head;
	free(new_head);

	return (nbr);
}
