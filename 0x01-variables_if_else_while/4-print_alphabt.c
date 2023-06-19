#include <stdio.h>

/**
* main - display the alphabet only q and e
*
* Return: 0 is valid
*/
int main(void)
{
int AZ;


for (AZ = 'a'; AZ <= 'z'; AZ++)
{
if (AZ != 'e' && AZ != 'q')
putchar(AZ);

}
putchar('\n');
return (0);
}
