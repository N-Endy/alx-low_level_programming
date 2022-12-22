#include "main.h"

/**
 * string_toupper - Changes all lowercase to uppercase
 * @str: pointer to the string
 *
 * Return: Returns the string in all uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0, j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40,
		41, 123, 125};

	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (sep[j] == str[i])
			{
				/* Checks if char is a lowercase */
				if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
			}
		}
		i++;
	}

	return (str);
}
