#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: the initial segment of
 * @accept: consist only of bytes
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{

unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s[i] != accept[j]; j++)
{
if (accept[j] == '\0')
return (i);
}

}
return[i]


}
