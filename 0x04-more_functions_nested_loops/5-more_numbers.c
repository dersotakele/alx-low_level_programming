#include "main.h"

/**
 * more_numbers-function to print a seaurnce of numbers ten times
 */

void more_numbers(void)
{
	int k, p;

	for (p = 1; p <= 10; p++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
				_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
