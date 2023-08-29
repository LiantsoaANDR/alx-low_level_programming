#include "lists.h"
/**
 * get_nodeint_at_index - give the n-th node of a listint_t list
 * @head: pointer to the head
 * @index: the index of the node, starting at 0
 * Return: the n of the node at the index index
 * return NULL if the node deos not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head)
	{
		i++;
		head = head->next;
	}
	if (!head)
		return (0);

	return (head);
}
