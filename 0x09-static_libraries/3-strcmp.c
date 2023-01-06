#include "main.h"

/**
 * _strcmp - Compares two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: returns 0 if strings are equal, negative integer if
 * char at s1 is less than char at s2, and positive otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res;

	/* Compare both strings */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* return difference if they differ */
		if (s1[i] != s2[i])
		{
			res = s1[i] - s2[i];
			break;
		}
		res = s1[i] - s2[i];
		i++;
	}

	return (res);
}
