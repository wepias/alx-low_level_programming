#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: the character to check
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
