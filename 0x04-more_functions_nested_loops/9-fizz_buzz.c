#include "main.h)
#include <stdio.h>

/**
 * main -  program that prints the numbers from 1 to 100
 * for multiples of 3 print Fizz
 * for the multiples of 5 print Buzz
 * multiples of both three and five print FizzBuzz
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 15 == 0))
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", n);
		n++;
	}
	printf("\n");
	return(0);
}
