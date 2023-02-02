#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: the sum of all data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
