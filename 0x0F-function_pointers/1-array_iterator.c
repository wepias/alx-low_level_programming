#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: array of int
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0 && size >= 1 && array != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
