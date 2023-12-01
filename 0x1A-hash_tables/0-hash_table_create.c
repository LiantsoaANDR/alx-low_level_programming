#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	unsigned int i = 0;

	if (!size)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;

	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new_ht->array))
	{
		free(new_ht);
		return (NULL);
	}

	while (i < size)
	{
		new_ht->array[i] = NULL;
		i++;
	}

	return (new_ht);
}
