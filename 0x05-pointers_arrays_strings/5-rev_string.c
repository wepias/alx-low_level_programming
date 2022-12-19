#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int x;

	for (x = 0; x < len / 2; x++)
	{
		char tmp = s[x];

		s[x] = s[len - x - 1];
		s[len - x - 1] = tmp;
	}
}
