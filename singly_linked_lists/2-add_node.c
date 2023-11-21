#include "lists.h"
/**
 * add_node - function adds new node
 *@str: is a string
 *@head: is a pointer to first node
 * Return: pointer to a list
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0, lent = 0;

	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
		lent++;
	}

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = lent;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
