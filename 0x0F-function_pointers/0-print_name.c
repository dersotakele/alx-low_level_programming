#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name:  print the name 
 * @f: pointer to the name printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
