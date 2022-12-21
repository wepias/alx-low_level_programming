#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of intergers
 * @n: number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = x;
	}
}
