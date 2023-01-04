#include "main.h"

/**
 * is_palindrome - Indicates if a string is a palindrome or not
 * @s: The string
 *
 * Return: Returns 1 or 0 is string is a palindrome or not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_recursion(s, len));
}

/**
 * _strlen_recursion - Gets the length of the string
 * @s: The string
 *
 * Return: Returns the length of the string, int
 */

int _strlen_recursion(char *s)
{
	/*Checks if character is NULL, adds up if not*/
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome_recursion - compares the characters in the string
 * @s: The string
 * @len: The length of the string
 *
 * Return: Returns 1 or 0 if string is palindrome or not
 */

int is_palindrome_recursion(char *s, int len)
{
	/* Checks if it is an empty or single character string */
	if (len <= 1)
		return (1);
	/* Checks if the first and last characters are equal */
	if (s[0] != s[length - 1])
		return (0);
	/* Checks the rest of the string */
	return (is_palindrome_recursion((s + 1), length - 2));
}
