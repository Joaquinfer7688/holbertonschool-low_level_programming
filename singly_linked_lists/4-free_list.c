#include "lists.h"
/**
 *free_list - function that frees a list
 *@head: is a pointer to list
 *Return: 0
 */
void free_list(list_t *head)
{
	list_t *check;

	while (head)
	{
		check = head;
		head = head->next;
		free(check->str);
		free(check);
	}

	free(head);
}
