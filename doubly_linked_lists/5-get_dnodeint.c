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