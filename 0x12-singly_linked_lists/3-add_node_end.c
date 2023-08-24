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
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = l;
	new->next = NULL;
	while ((*head)->next)
		(*head) = (*head)->next;
	*head = new;

	return (new);

}
