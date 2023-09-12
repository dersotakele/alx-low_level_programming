#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n, y;

	for (n = '0'; y < '9'; n++)
	{
		for (y = n + 1; y <= '9'; y++)
		{
			if (y != n)
			{
				putchar(n);
				putchar(y);
				if (n == '8' && y == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
