#include "lists.h"
/**
 *print_dlistint - function prints all elements of list
 *@h: head
 *Return: nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
