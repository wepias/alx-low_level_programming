#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: character to verify
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
