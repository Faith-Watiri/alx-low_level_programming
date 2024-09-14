#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point to test the functions.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint(&head, 0);
    add_nodeint(&head, 1);
    add_nodeint(&head, 2);
    add_nodeint(&head, 3);
    add_nodeint(&head, 4);
    print_listint(head);
    return (0);
}

