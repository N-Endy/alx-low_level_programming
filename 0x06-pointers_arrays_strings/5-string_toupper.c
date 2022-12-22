#include "main.h"

/**
 * string_toupper - Changes all lowercase to uppercase
 * @str: pointer to the string
 *
 * Return: Returns the string in all uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Checks if char is a small letter */
		if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
