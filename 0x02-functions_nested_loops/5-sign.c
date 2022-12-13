#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@c: Takes an argument of type int
 *
 * Description: Print 1 if greater than 0, -1 if less than 0, else 0
 * Return: Returns an integer value
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('1');
		return (1);
	} else if (c < 0)
	{
		_putchar('-1');
		return (-1);
	}
	_putchar('0');
	return (0);
}
