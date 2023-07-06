#include "main.h"

/**
 *_puts_recursion - prints string in reverse
 *
 *@s: input value
 *
 *return: void
 *
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
}
