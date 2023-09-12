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
	char alphabt, e, q;

	e = 'e';
	q = 'q';

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != e && alphabt != q)
		putchar(alphabt);
	}
	putchar('\n');
	return (0);
}
