#include "main.h"

/**
 * factorial - returns the n! of a number
 * @n: num to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{/* n is lower than 0=error case*/
		return (-1);
	}
	else if (n == 0)
	{ /* factorial of 0 is 1=Base case*/
		return (1);
	}
	else
	{ /*= Recursive case*/
		return (n * factorial(n - 1));
	}
}
