#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sums all of its parameters
 * @n: Total number of args
 *
 * Return: Returns sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;
	
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
