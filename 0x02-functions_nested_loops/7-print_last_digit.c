#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;

	a = num % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
