#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integer
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != 0 && size >= 1 && array != 0)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
