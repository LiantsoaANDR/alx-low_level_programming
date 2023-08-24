#include "lists.h"
#include <stdlib.h>
/**
 * free_list - freees a list_t list
 * @head: pointer to the header of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
