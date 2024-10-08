#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

new_node = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
if (new_node == NULL)
	return (NULL);  /* Return NULL if memory allocation fails */

new_node->n = n;  /* Set the new node's data */
new_node->next = *head;  /* Set the next pointer of the new node */
*head = new_node;  /* Move the head to point to the new node */

return (new_node);
}

