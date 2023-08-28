#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
