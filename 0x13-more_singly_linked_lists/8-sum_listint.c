#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: the sum of all data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n; /* Add the value of n to the sum */
head = head->next; /* Move to the next node */
}
return (sum);
}
