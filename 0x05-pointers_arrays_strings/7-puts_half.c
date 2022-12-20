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

	if (len % 2 == 0)
	{
		for (j = len / 2; j <= len - 1; j++)
			_putchar(str[j]);
	} else
	{
		for (j = ((len - 1) / 2) + 1; j <= len - 1; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
