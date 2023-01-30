#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a `list_t` list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and added as the new node's `str`
 *
 * Return: the address of the new element
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
