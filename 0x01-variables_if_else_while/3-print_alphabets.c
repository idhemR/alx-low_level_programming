#include <stdio.h>

/**
* main - display the alphabet in lowercase and in uppercase
*
* Return: 0 is valid
*/
int main(void)
{
int AZ;

for (AZ = 'A'; AZ <= 'Z'; AZ++)
putchar(AZ);
for (AZ = 'a'; AZ <= 'z'; AZ++)
putchar(AZ);
putchar('\n');
return (0);
}
