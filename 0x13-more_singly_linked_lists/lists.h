#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer stored in the node
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure for integers
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function Prototypes */
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */
