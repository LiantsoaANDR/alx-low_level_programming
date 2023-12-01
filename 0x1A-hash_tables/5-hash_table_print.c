#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
 * Return: (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned int i = 0, first_flag = 1;

	printf("{");

	while (i < ht->size)
	{
		current = ht->array[i];
		while (current)
		{
			if (first_flag == 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_flag = 0;
			current = current->next;
		}
		i++;
	}

	printf("}\n");
}
