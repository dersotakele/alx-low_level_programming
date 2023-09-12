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
	char alphABET;

	for (alphABET = 'a'; alphABET <= 'z'; alphABET++)
		putchar(alphABET);
	for (alphABET = 'A'; alphABET <= 'Z'; alphABET++)
		putchar(alphABET);
	putchar('\n');
	return (0);
}
