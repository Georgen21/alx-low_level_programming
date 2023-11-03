#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *next = ht;
	hash_node_t *node, *index;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			node = ht->array[j];
			while (node != NULL)
			{
				index = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = index;
			}
		}
	}
	free(next->array);
	free(next);
}
