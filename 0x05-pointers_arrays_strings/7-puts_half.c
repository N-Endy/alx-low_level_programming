#include "main.h"

/**
 * puts_half - Prints half of a string followed by a new line
 * @str: the string
 *
 * Return: No value
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	for (j = len / 2; j <= len; j++)
		_putchar(str[j]);
	_putchar('\n');
}
