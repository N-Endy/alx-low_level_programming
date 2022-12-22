#include "main.h"

/**
 * cap_string- Capitalizes all the words of a string
 * @str: pointer to the string
 *
 * Return: Returns all words capitalized
 */
char *cap_string(char *str)
{
	int i, j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40,
		41, 123, 125};

	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0', i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (sep[j] == str[i])
			{
				/* Checks if char is a lowercase */
				if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
				break;
			}
		}
	}

	return (str);
}
