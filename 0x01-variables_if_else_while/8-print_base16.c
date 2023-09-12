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
	int n;
	char alpha;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
