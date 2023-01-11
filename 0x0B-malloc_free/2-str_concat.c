#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to a new space in memory with the contents of s1
 * followed by the contents of s2
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	result = malloc(len1 + len2 + 1);
	
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
