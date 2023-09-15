#include "main.h"

/**
 * _isupper-function to Check for upper case
 *@x: the letter checked
 * Return:1 int data typee
 */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'z')
	{
		return(1);
	}
	return(0);
}
