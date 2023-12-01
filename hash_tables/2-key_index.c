#include "hash_tables.h"
/**
 *key_index - function that ghives you index a key
 *@size: size of array
 *@key: key get index
 *Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
