#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory area
 * @src: memory area to be copied from
 * @n: memory bytes
 *
 * Return: a pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
