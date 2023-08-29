#include "lists.h"
/**
 * sum_listint - sum all the data(n) of a list listint_t list
 * @head: pointer to the head of the linked list
 * Return: the sum of all n of the list
 * return 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
