#include "lists.h"
/**
 *list_len - return number of elements in a linked
 *@h: linked list
 *Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		  count++;
	}

	return (count);
}
