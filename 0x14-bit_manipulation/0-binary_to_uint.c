#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string of chars
 *
 * Return: Returns an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	/* Check if b is NULL */
	if (b == NULL)
		return (0);

	/* starts from end of string */
	while (*b != '\0')
	{
		/* checks if char is 1 or 0 and multiplies by pow*/
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) + (*b - '0');
			b++;
		} else
			return (0);
	}

	return (result);
}
