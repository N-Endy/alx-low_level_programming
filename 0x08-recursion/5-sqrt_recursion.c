#include "main.h"

/**
 * _sqrt_recursion - Gives the natural square root of a number
 * @n: The number to find its square root
 *
 * Return: Returns the sqaure root of n, int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - checks recursively for square root of n
 * @n: The number
 * @i: Number checked recursively
 *
 * Return: Returns int
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
