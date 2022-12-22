#include "main.h"

/**
 * rot13 - Changes all lowercase to uppercase
 * @str: pointer to the string
 *
 * Return: Returns the string in coded format
 */
char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* Checks if char is a letter */
		if ((str[i] > 96 && str[i] < 123) || (str[i] > 64) && str[i] < 91)
			str[i] = str[i] + 13;
		i++;
	}

	return (str);
}
