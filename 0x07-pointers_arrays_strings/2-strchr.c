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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
