#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 *
 * @s: initial string
 * @c: the first occurrence of the character
 *
 * Return: s string value
 */

char *_strchr(char *s, char c)
{
int i = 0;
for (i = 0; s[i] >= '\0'; )
{

if (s[i] == c)
{
return (s + i);
}

i++;
}
return ('\0');
}
