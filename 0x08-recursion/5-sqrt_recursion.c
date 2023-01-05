#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: interger
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	for (i = 1; i <+ n / 2; i++)
	{
		if (i * i == n)
		{
			return (i);
		}
	}
	return (-1);
}
