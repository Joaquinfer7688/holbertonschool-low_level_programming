#include "lists.h"
/**
*dlistint- function that free list
*@head: pointer to list
*Return: 0
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
