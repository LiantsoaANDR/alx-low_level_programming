#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - Deletes a hash table
 * @ht:the hash table
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned int i = 0;

	if (!ht)
		return;

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
