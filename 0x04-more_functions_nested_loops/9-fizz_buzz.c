#include "main.h"
#include <stdio.h>

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if ((n % 15 == 0))
			printf("FuzzBuzz ");
		else
			printf("%d ", n);
		n++;
	}
	return(0);
}
