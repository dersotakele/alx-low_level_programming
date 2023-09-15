#include "main.h"

/**
 * print_triangle - display triangle
 * @size:show size of triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 1; m <= size; m++)
		{
			for (p = m; p < size; p++)
			{
				_putchar(32);
			}
			for (p = 1; p <= m; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
