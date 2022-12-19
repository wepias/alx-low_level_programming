#include "main.h"
#include <string.h>

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 */

void puts2(char *str)
{
	int x;

	for (x = 0; str [x] != '\0'; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
