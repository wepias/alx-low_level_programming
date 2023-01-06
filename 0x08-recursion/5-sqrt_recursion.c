#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: interger
 * @i: interger
 *
 * Return: -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i > n / 2)
	{
		return (-1);
	}
	return (_sqrt_recursion(n, i + 1));
}

/**
 * sqrt_recursion - function
 * @n: interger 
 *
 * Return: int
 */
int sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_recursion(n, 1));
}
