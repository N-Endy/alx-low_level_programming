#include "main.h"

/**
 * _pow_recursion - Gives the value of x raised to power of y
 * @x: The base number
 * @y: The power
 *
 * Return: Returns x raised to power y, int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
