#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vec.
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int total_length, length;
	int current_index, i;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}

	concatenated_str = malloc(total_length + ac + 1);
	if (concatenated_str == NULL) 
	{
		return (NULL);
	}
	current_index = 0;
	for (i = 0; i < ac; i++) 
	{
		length = strlen(av[i]);
		memcpy(concatenated_str + current_index, av[i], length);
		current_index += length;
		concatenated_str[current_index++] = '\n';
	}

	concatenated_str[current_index] = '\0';
	return (concatenated_str);
}
