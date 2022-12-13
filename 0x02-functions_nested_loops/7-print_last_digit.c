#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	int n, res;

	if (num < 0)
		n = num * -1;

	res = n % 10;

	if (res < 0)
		res = -res;

	_putchar(res + '0');

	return (res);
}
