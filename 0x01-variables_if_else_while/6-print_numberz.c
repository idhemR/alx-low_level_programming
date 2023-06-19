#include <stdio.h>

/**
* main - display single digit of base 10 with putchar
*
* Return: 0 is valid
*/
int main(void)
{
char n;

for (n = 48 ; n < 58 ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
