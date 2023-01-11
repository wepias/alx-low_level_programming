#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer to a new string which is a duplicate of the string
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	strncpy(dup, str, len + 1);
	return (dup);
}
