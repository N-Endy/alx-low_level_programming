#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: Seperator for printed numbers
 * @n: number of arguments passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int num;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		printf("%d", num);
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(nums);
	printf("\n");
}
