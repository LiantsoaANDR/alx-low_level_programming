#include "lists.h"
/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t
 * @head: pointer to the header of the list
 * Return: the sum of all the data (n) of a dlistint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
