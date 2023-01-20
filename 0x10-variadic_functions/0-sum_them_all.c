#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int *args;
	int sum;
	 va_list vl;
	unsigned int i;

	args = malloc(sizeof(int) * n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		args[i] = va_arg(vl, int);
		sum += args[i];
	}
	va_end(vl);
	free(args);
	return (sum);
}
