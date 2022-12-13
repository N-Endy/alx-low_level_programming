#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: It takes an integer as argument
 *
 * Return: Returns 1 if character is alphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
