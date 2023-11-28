#include "lists.h"
/**
 *delete_dnodeint_at_index: function deletes node an index of linked list
 *@head: pointer
 *@index: index position node delete
 *Return: 1 or -1
 *Description: delete node at index position
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *j = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (j == NULL)
			return (-1);
		j = j->next;
	}

	if (j == *head)
	{
		*head = j->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		j->prev->next = j->next;
		if (j->next != NULL)
			j->next->prev = j->prev;
	}

		free(j);
		return (1);
}
