#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	int n;

	if (num < 0)
		n = num * -1;

	if (n != 0)
		return (n % 10);
	return (0);
}
