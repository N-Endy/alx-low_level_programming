#include "main.h"

/**
 * _islower - Checks for lower character
 * @c: an integer parameter
 *
 * Return: Returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	return (0);
}
