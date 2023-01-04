#include "main.h"

/**
 * factorial - Gives the factorial of a given number
 * @n: the number
 *
 * Return: Returns the factorial of n, int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
