#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: initital segment
 * @accept: bytes to return
 *
 * Return: number of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int k, l;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] != 32)
		{
			for (l = 0; accept[l] != '\0'; l++)
			{
				if (s[k] == accept[l])
					a++;
			}
		}
		else
			return (a);
	}
		return (a);

}
