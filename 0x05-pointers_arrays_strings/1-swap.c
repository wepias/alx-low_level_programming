#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @tmp: temporary variable
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
