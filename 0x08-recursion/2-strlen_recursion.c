#include "main.h"

/**
 * _strlen_recursion - Gives the length of a string
 * @s: The string to act on
 *
 * Return: Returns the length of the string, int
 */

int _strlen_recursion(char *s)
{
	int res = 0;

	if (*s == '\0')
		return (0);

	if (*s)
	{
		res++;
		_strlen_recursion(s + 1);
	}

	return (res);
}
