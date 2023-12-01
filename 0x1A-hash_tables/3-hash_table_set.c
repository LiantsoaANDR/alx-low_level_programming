#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, can not be an empty string
 * @value: is the value associated with the key. value must be duplicated
 * value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 *
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *current;
	unsigned int index;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
		{
			free(current->value);
			current->value = strdup((char *)value);
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->value = strdup((char *)value);
	new->key = strdup((char *)key);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
