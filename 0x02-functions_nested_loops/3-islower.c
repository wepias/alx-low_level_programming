#include "main.h"

/**
 * _islower - checks if a given character is a lowercase letter
 * @c: the character to check
 *
 * Returns:
 * 1 if c is a lowercase letter
 * 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}
