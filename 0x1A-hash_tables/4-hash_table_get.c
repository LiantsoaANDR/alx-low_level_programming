#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned int index;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(key, current->key) == 0)
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
