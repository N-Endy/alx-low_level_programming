#include "main.h"

/**
 * leet - encodes a string 1337
 * @str: the string to be encoded
 *
 * Return: Returns the encoded string
 */
char *leet(char *str)
{
	int i, j;
	char lowercase[] = {'a', 'e', 'o', 't', 'l'};
	char uppercase[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {52, 51, 48, 55, 49}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lowercase[j] || str[i] == uppercase[j])
			{
				str[i] = number[j];
				break;
			}
		}
	}

	return (str);
}
