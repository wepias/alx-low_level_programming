#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9, followed by a new line
 * 
 * Return: 0 up 9 
 */
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}

	_putchar('\n');
}
