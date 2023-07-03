#include "main.h"

/**
 * _memset - function set a string according to n bytes
 * @s: address supposed to change
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed s with b value for n bytes
 */


char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n  > 0 ; i++, n--)
{
s[i] = b;

}
return (s);



}
