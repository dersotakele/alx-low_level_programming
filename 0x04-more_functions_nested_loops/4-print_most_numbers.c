#include "main.h"

/**
 * print_most_numbers-function to print most of the primitive numbers
 */

void print_most_numbers(void)
{
	char num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
