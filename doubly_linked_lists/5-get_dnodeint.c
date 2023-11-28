#include "lists.h"
#include <stddef.h>

/**
 *get_dnodeint_at_index - function returns the nth node of linked list
 *@head: pointer to head the list
 *@index: locate node in list
 *Return: NULL or node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
