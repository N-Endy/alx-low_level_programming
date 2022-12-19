#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the string
 *
 * Return: No value
 */
void rev_string(char *s)
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
