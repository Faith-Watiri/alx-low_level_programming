#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node in the linked list
 * @index: the index of the node to return, starting from 0
 *
 * Return: pointer to the node at the specified index, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    
    while (head != NULL)
    {
        if (i == index)
            return (head);
        head = head->next;
        i++;
    }

    return (NULL); /* Return NULL if the node doesn't exist */
}

