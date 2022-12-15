#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: number
 */
void print_numbers(void)
{
	for (int n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
