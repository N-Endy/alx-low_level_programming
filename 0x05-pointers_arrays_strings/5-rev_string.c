#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: the string
 *
 * Return: No value
 */
void rev_string(char *s)
{
	int count = 0;
	int i = 0;
	int j;
	char res;

	/* Get the length of the string */
	while (s[i] != '\0')
	{
		count++;
		i++;
	}

	/* Use half of its length to print starting from back */
	for (j = 0; j <= (count - 1) / 2; j++)
	{
		res = s[j];
		s[j] = s[count - 1 -j];
		s[count - 1 -j] = res;
	}
}
