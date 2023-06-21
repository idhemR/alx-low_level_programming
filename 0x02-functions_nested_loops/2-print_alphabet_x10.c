#include "main.h"

/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{

int n;
char AZ;
for (n = 0; n <= 9; n++)
{
for (AZ = 'a'; AZ <= 'z'; AZ++)
_putchar(AZ);

 _putchar('\n');
}
}
