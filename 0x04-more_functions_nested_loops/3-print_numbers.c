#include "main.h"

/**
 * print_numbers - Prints the number from 0 - 9
 *
 * Return: No return value
 */

void print_numbers(void)
{
	char i;

	for (i = 48; i < 58; i++)
		_putchar(i);
	_putchar('\n');
}
