#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	int res;

	if (num < 0)
		num *= -1;
	res = num % 10;
	_putchar('0' + res);
	return (res);
}
