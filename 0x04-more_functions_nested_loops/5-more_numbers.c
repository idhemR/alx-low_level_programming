#include "main.h"
/**
* more_numbers - numbers fr 0 to 14 ten times
*
* return : void
*
*/

void more_numbers(void)
{
int i, j;
/*
* rows
*/
for (i = 1; i <= 10; i++)
{
/*
* numbers to 14
*/
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar (j % 10 + '0');
}
_putchar('\n');
}
}

