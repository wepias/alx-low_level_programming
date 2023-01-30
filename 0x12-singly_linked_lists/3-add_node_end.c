#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a `list_t` list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added as the new node's `str`
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;

	dup_str = strdup(str);
	if (!dup_str)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		free(dup_str);
		return (NULL);
	}
	new_node->str = dup_str;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
	temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
