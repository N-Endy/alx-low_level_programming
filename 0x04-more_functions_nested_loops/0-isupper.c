#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c: integer value as argument
 *
 * Return: Returns int, 1 for uppercase and 0 otherwise
 */

int _isupper(int c)
{
	return ((c > 64 && c < 91) ? 1 : 0);
}
