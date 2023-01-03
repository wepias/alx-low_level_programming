#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointer to first occurence of char c
 * or return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
