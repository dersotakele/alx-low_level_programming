#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation num
 * @n: decimal number to print as binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int shift;

        if (n == 0)
        {
                printf("0");
                return;
        }
        temp = n;
        shift = 0;
        while ((temp >>= 1) > 0)
        {
                shift++;
        }
        while (shift >= 0)
        {
                if ((n >> shift) & 1)
                        printf("1");
                else
                        printf("0");
                shift--;
        }
}
