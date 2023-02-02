#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: A string of chars
 *
 * Return: Returns an unsigned int
 */
unsigned int binary_to_unit(const char *b)
{
	int len, i;
	unsigned int result = 0;
	unsigned int pow = 1;

	/* Get the length of the string */
	for (len = 0; b[len]; len++)
		;

	/* Check if b is NULL */
	if (b == NULL)
		return (0);

	/* starts from end of string */
	for (i = len - 1; i >= 0; i--)
	{
		/* checks if char is 1 or 0 and multiplies by pow*/
		if (b[i] == '0' || b[i] == '1')
		{
			result += (b[i] - '0') * pow;
			pow *= 2;
		} else
			return (0);
	}

	return (result);
}
