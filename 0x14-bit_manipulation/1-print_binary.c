#include "main.h"


/**
 * print_binary - convert decimal to binary
 *
 * @n : the number taken in value
 *
 * return : binary
 *
 */


void print_binary(unsigned long int n)
{
unsigned long int len = 1;
if (n == 0)
	_putchar('0');
while (len <= n)
len <<= 1;
if (len > n)
len >>= 1;
while (len)
{
if (n & len)
_putchar('1');
else
_putchar('0');
mask >>= 1;

}




}
