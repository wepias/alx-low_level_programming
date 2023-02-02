#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to store in the new node
 *
 * Return: address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || (idx != 0 && temp->next == NULL))
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
