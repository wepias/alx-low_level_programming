#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument
 * @argv: argument
 *
 * Return: 0
 */
int main(int argc, char* argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
