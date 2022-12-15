#include "main.h"

/**
 * print_square - function that prints a square
 *  @size: size of the square
 * Return: square with # character
 */
void print_square(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
