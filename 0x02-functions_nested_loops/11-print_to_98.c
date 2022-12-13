#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Number input
 *Return: Always 0
 */
void print_to_98(int n)
{
	for (int i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i < 98)
		{
      			printf(", ");
		}
	}
	printf("\n");
}
