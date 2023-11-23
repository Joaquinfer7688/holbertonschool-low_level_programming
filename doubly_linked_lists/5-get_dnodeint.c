<<<<<<< HEAD
#include "lists.h"
/**
 *get_dnodeint_at_index -
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
=======
#include "lists.h"
/*
*get_dnodeint_at_index - return the nth node of the list
*@head: pointer to list
*@index: index with node
*Return: NULL or head
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
>>>>>>> ff3ce73ea760f896b378d5f7ef661a42a5f39b85
