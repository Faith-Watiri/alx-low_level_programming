#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added as the new node's str (duplicated).
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
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
    new_node->next = *head;

    /* Update the head pointer */
    *head = new_node;

    return (new_node);
}
