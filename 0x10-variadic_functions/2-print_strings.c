#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separate the strings
 * @n: The number of value
 * @...: the values
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *string;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
