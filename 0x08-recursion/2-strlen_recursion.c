#include "main.h"

/**
 * _strlen_recursion - Gives the length of a string
 * @s: The string to act on
 *
 * Return: Returns the length of the string, int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
