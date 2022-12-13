#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	int res, n;

	if (num < 0)
		n = num * -1;
	while (n > 10)
		res = n % 10;
	return (res);
}
