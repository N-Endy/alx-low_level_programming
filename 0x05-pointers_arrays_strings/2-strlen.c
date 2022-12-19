#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: Returns the length in int form
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
