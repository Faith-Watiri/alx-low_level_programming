#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a listint_t list
 * @head: double pointer to the head of the linked list
 * @idx: the index where the new node should be added, starting at 0
 * @n: the data to be inserted in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new_node, *current;

/* Create the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
    
/* Special case for inserting at the head (index 0) */
if (idx == 0) {
new_node->next = *head;
*head = new_node;
return (new_node);
}

current = *head;

/* Traverse the list until the node before the index position */
for (i = 0; i < idx - 1; i++) {
if (current == NULL)
return (NULL);
/* Index out of range */current = current->next;
}

/* If current is NULL, the index is out of range */
if (current == NULL)
return (NULL);

/* Insert the new node */
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
