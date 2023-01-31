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
	va_list args;
	unsigned int i = 0;
	char *temp;

	if (n <= 0 || !n)
		return;

	va_start(args, n);
	for (; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp)
			printf("%s", temp);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}


int main(void)
{
    print_strings(", ", "Jay", "Django");
    return (0);
}
