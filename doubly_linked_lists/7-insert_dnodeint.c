#include "lists.h"
/**
 *insert_dnodeint_at_index - function insert new node at given position
 *@h: pointer doubly list
 *@idx: index
 *@n: value new node
 *Return: new_node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *actual_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	actual_node = *h;

	while (idx > 1 && actual_node && actual_node->next)
	{
		actual_node = actual_node->next;
		idx--;
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (idx > 1 || actual_node == NULL)
		return (NULL);

	new_node->n = n;

	if (actual_node->next != NULL)
		actual_node->next->prev = new_node;
	new_node->prev = actual_node;
	new_node->next = actual_node->next;
	actual_node->next = new_node;

	return (new_node);
}
