#include "hash_tables.h"
/**
 *hash_table_delete - function delete a hash table
 *@ht: is a hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t 8head = ht;
	hash_node_t 8/node, *j;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				j = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = j;
			}
		}
	}
	free(head->array);
}
