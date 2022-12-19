#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string
 *
 * Return: No value
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int j;

	/* Get the length of the string */
	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	/* Use length to print starting from back */
	for (j = count - 1; j >= 0; j--)
		_putchar(s[j]);
}
