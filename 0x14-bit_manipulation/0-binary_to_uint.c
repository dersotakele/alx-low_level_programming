#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int tot = 0, pow = 1;
	int l = 0;

	if (b == NULL)
		return (0);
	while (b[l])
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		l++;
	}
	l--;
	while (l >= 0)
	{
		if (b[l] == '1')
			tot += pow;
		l--;
		pow *= 2;
	}
	return (tot);
}
