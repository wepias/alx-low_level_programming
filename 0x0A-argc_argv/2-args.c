#include "main.h"
#include <stdio.h>

/**
 * main - program that writes a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument
 *
 * Return: Always Zero
 */

int main(int argc, char* argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}		
	return (0);
}
