#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    unsigned int len = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the string */
    while (str[len])
        len++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Duplicate the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Set the length and next pointer */
    new_node->len = len;
    new_node->next = NULL;

    /* If the list is empty, set the new node as the head */
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        /* Traverse to the end of the list */
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        /* Attach the new node at the end */
        temp->next = new_node;
    }

    return (new_node);
}

