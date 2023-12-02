#include "hash_tables.h"
/**
 *hash_table_set - function adds an element to hash table
 *@key: key of value
 *@value: value associate with key
 *@ht: hash table want to add or update the key/value to
 *Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *actual_node = NULL, *new_node = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	i = key_index((unsigned char *) key, ht->size);
	actual_node = ht->array[i];

	if (actual_node && strcmp(key, actual_node->key) == 0)
	{
		free(actual_node->value);
		actual_node->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
