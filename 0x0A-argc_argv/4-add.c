#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *p = argv[i];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
