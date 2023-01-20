#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		switch (format[i]){
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str== NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			default:
				break;
				}
		if (format[i + 1])
		{
			printf( ", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
