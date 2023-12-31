#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * the function sets the head to NULL
 * @head: pointer to the pointer of the header
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nxt;

	if (!head)
		return;
	while (*head)
	{
		nxt = (*head)->next;
		free(*head);
		*head = nxt;
	}
	head = 0;
}
