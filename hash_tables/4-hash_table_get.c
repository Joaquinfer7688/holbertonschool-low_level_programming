#include "hash_tables.h"
/**
 *hash_table_get - function retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: key you are looking for
 *Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);
	current = ht->array[i];

	if (current == NULL)
		return (NULL);

	while (strcmp(key, current->key) != 0)
		current = current->next;

	return (current->value);
}
