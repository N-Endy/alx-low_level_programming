#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j;
	char *string;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(strings);
	printf("\n");
}
