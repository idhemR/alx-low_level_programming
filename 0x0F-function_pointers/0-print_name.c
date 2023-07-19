#include "function_pointers.h"


/**
 * print_name - func print name
 * @name: the name
 * @f: the function pointer
 *
 * Return: void
 */



void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);






}
