#include "main.h"
#include <stdio.h>

/**
 * main-fuction main check the integers to replace it
 * with the corresponding word
 * Return:0
 */

int main(void)
{
	int k;

	for (k = 1; k <= 100; k++)
	{
		if (k % 3 == 0 && k % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (k % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (k % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (k == 1)
		{
			printf("%d", k);
		}
		else
		{
			printf(" %d", k);
		}
	}
	printf("\n");
	return (0);
}
