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
	char tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla--)
		putchar(tebahpla);
	putchar('\n');
	return (0);
}
