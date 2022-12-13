#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: An integer value
 *
 * Return: Returns an integer value
 */

int print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	return (num % 10);
}
