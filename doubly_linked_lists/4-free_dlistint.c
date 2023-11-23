#include "lists.h"
/**
*free_dlistint- function that free list
*@head: pointer to list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head)
	{
		check = head->next;
		free(head);
		head = check;
	}
}
