#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: unsigned interger
 *
 * Return: pointer to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2
 *and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int len1 = 0;
	unsigned int len2 = 0;
	int i;

	if (s2 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	for (i = 0; i < (int)n; i++)
	{
		concat[i + len1] = s2[i];
	}
	concat[len1 + n] = '\0';
	return (concat);
}
