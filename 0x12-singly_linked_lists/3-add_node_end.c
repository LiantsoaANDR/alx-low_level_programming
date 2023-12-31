#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the pointer head
 * @str: the string to add
 * Return: the address of the new element, of NULL on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;
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
