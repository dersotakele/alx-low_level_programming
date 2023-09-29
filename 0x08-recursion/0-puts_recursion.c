#include "main.h"

/**
 * _puts_recursion - dsiplays a string, followed by a new line
 * @s: string to dsiplay
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{ /* Base case: end of string*/
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1); /* Recursive call with the next char*/
}

