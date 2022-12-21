#include "main.h"

/**
 * _strcat - function that appends strings
 * @src: character to be appended
 * @dest: character to append
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return(s);
}
