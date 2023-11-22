#include "lists.h"
/**
 *dlisint_len - function return number of elements the list
 *@h: head
 *Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
