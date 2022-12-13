#include "main.h"

/**
 * print_alphabet - Print letters of the alphabet
 *
 * Description: The alphabet printed are all in lowercase
 * Return: No return value;
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
