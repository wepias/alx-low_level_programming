#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half of a string
 * @str: character to check
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half_length = (length - 1) / 2;
	int i;

	if (length % 2 == 0)
	{
		half_length = length / 2;
	}

	for (i = half_length; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
