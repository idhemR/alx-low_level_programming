#include "main.h"

/**
* print_square - as the name of the function
*
* @size : parameter parameter that take height and weight of square
*
* return : void
*
*/

void print_square(int size)
{
int i, j;
if (size == 0)
{
_putchar('\n');
}
else
{
for (i = 0; i <= size; i++)
{
for (j = 0; j <= size; j++)
_putchar('#');
}
_putchar('\n');
}

}

