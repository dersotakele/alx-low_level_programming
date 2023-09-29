#include "main.h"

/**
 * _pow_recursion - returns value of x raised to the power of y
 * @x: value to raise
 * @y: power
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{ /* Error case*/
		return (-1);
	}
	else if (y == 0)
	{ /* Base case*/
		return (1);
	}
	else
	{ /* Recursive case*/
		return (x * _pow_recursion(x, y - 1));
	}
}
