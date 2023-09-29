#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{ /* Base case: end of string*/
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
	/* Recursive call with the next character*/
}

