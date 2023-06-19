#include <stdio.h>

/**
* main - display single digit of base 10 with putchar
*
* Return: 0 is valid
*/
int main(void)
{
char n = 48;

for (n < 58)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
