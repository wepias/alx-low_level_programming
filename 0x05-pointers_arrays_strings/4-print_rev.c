#include "main.h"
#include <string.h>
/**
 * print_rev - function prints string in reverse, followed by a new line
 * @x: string to print in reverse
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int x;

	for (x = len - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
