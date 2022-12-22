#include "main.h"

/**
 * string_toupper - Changes all lowercase to uppercase
 * @s: pointer to the string
 *
 * Return: Returns the string in all uppercase letters
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s != '\0')
	{
		/* Checks if char is a small letter */
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
}
