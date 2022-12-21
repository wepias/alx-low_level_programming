#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: character
 * @src: character
 * @n: byte to be used
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && x < n)
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';
	return(dest);
}
