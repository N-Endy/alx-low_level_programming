#include "main.h"

/**
 * print_alphabet_x10 - Prints the letters in the alphabet
 *
 * Description: It prints all lower alphabets 10 times
 * Return: No return value.
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
	}
	_putchar('\n');
}
