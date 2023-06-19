#include <stdio.h>

/**
* main - display the numbers of base 16 in lowercase,
*
* Return: 0 is valid
*/
int main(void)
{
int n;
char af;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (af = 'a'; af <= 'f'; af++)
{
putchar(af);
}
putchar('\n');
return (0);
}
