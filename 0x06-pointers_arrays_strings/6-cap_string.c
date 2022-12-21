#include "main.h"
#include <ctype.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string
 * Return: str 
 */

char *cap_string(char *s)
{
	int i;
	int sep;

	if (s[0] != '\0')
	{
		s[0] = toupper(s[0]);
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		sep = (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}');
		if (sep && s[i + 1] != '\0')
		{
			s[i + 1] = toupper(s[i + 1]);
		}
	}
	return (s);
}
