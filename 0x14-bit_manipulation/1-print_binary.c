#include "main.h"

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask;

	foor (i = 31; i >= 0; i--)
	{
		mask = 1 << i;
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}
	_putchar('\n');
}
