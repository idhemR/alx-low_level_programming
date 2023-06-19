#include <stdio.h>

/**
* main - display alphabet lowercase from Z to A
*
* Return: 0 is valid
*/
int main(void)
{

char ZA;
for (ZA = 'z'; ZA >= 'a'; ZA--)
{
putchar(ZA);
}
putchar('\n');
return (0);
}
